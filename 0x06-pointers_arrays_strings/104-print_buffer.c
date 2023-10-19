#include "main.h"

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int n;
	int i;

	for (n = 0; n < size; n += 10)
	{
		printf("%08x: ", n);

		for (i = 0; i < 10; i++)
		{
			if ((i + n) >= size)
				printf("  ");

			else
				printf("%02x", *(b + i + n));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + n) >= size)
				break;

			else if (*(b + i + n) >= 31 &&
				 *(b + i + n) <= 126)
				printf("%c", *(b + i + n));

			else
				printf(".");
		}

		if (n >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
