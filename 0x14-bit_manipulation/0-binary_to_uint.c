#include "main.h"

/**
 * binary_to_uint - Converts a binary nber to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted nber.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int mult = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		n += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (n);
}
