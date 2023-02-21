#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: The charactar entered
 * Return: 1 if c is lowercase an 0 if c is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
