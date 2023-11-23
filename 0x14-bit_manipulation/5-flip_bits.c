#include "main.h"

/**
 * flip_bits - Counts the number of bit needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bit to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int bit = 0;

	while (x > 0)
	{
		bit += (x & 1);
		x >>= 1;
	}

	return (bit);
}
