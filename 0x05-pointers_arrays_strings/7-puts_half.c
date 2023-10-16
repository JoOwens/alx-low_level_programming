#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: Null.
 */

void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		len = i / 2;
	else
		len = (i + 1) / 2;

	for (; len < i; len++)
		_putchar(str[len]);

	_putchar('\n');
}
