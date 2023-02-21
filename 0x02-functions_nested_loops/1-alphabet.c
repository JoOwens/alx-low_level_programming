#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase,
 *			followed by a new line.
 * _putchar: prints Characters
 * Return: always null
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}

