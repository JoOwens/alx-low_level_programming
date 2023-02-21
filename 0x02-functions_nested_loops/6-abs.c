#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *@n: The integer
 * Return: Absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
