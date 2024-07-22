#include "main.h"

/**
 * _printChar - Affiche un caractère.
 * @arg: Liste d'arguments contenant le caractère à afficher.
 *
 * La fonction extrait un caractère de la liste d'arguments et l'affiche
 * en utilisant la fonction _putchar. Le caractère est récupéré comme un
 * entier (int), car va_arg traite les arguments variadiques comme des
 * entiers.
 */
void _printChar(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
}

/**
 * _printString - Affiche une chaîne de caractères.
 * @arg: Liste d'arguments contenant la chaîne de caractères à afficher.
 *
 * La fonction extrait une chaîne de caractères de la liste d'arguments et
 * l'affiche caractère par caractère en utilisant la fonction _putchar. La
 * fonction continue à afficher les caractères jusqu'à ce qu'elle rencontre
 * le caractère nul ('\0'), indiquant la fin de la chaîne.
 */
void _printString(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * printPercent - Affiche le caractère '%' littéralement.
 *
 * La fonction affiche simplement le caractère '%' en utilisant la fonction
 * _putchar. Cela permet de montrer le symbole '%' dans le texte affiché.
 */
void printPercent()
{
	_putchar('%');
}
