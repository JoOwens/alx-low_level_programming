#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);

	while (i < n)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(num);
}
