#include <stdio.h>

/**
 * main: function that sums multiples of 3 or 5 below 1024
 *
 * Return: Sum.
 */

int main(void)
{
	int n;
	int sum;

	n = 3;
	sum = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
		n = n + 1;
	}
	printf("%d\n", sum);
	return (sum);
}
