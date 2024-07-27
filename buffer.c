#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/* Static buffer and index */
static char buffer[BUFFER_SIZE];
static int buffer_index;

/**
 * buffer_init - Initializes the buffer and buffer index.
 *
 * Description:
 * This function sets the buffer index to zero. It should be called
 * once during the setup phase of the program to prepare the buffer
 * for use. The buffer itself is statically allocated and not
 * explicitly initialized here.
 */
void buffer_init(void)
{
	buffer_index = 0;
}

/**
 * flush_buffer - Flushes the contents of the buffer to standard output.
 *
 * Description:
 * The function checks if there are any characters in the buffer. If there
 * are, it writes them to stdout using the write system call. After writing,
 * it resets the buffer index to zero, so the buffer is cleared and ready
 * for new data.
 *
 * Return: This function does not return any value.
 *
 * Note:
 * The function helps reduce the number of system calls by accumulating
 * output in a buffer and writing it in bulk.
 */
void flush_buffer(void)
{
	if (buffer_index > 0)
	{
		write(1, buffer, buffer_index);
		buffer_index = 0;
	}
}

/**
 * buffer_add - Adds a character to the buffer.
 *
 * @c: The character to add to the buffer.
 *
 * Description:
 * Adds a single character to the buffer. If the buffer is full,
 * it will first flush the buffer before adding the new character.
 */
void buffer_add(char c)
{
	if (buffer_index >= BUFFER_SIZE)
	{
		flush_buffer();
	}
	buffer[buffer_index++] = c;
}
