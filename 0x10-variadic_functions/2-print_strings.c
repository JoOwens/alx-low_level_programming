#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Reaturn: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list txts;
	char *str;
	unsigned int i = 0;

	va_start(txts, n);

	while (i < n)
	{
		str = va_arg(txts, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(txts);
}
