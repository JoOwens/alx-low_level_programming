#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: String input
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
