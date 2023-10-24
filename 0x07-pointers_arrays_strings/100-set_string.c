#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: Void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
