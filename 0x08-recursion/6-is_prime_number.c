#include "main.h"

/**
 * divisibility - Checks if a number is divisible.
 * @n: The number to be checked.
 * @div: The divisor.
 *
 * Return: 0 If the number is divisible else 1
 */

int divisibility(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (divisibility(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 If the integer is prime else 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisibility(n, div));
}
