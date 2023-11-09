#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;
	int sum = 0;

	va_start(num, n);

	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}

	va_end(num);

	return (sum);
}
