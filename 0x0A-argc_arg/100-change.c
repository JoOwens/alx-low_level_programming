#include "main.h"

/**
 * main - Prints the minimum coins to make change
 *		for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success else 1
 */

int main(int argc, char **argv)
{
	int total;
	int coins;
	unsigned int i = 0;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	coins = 0;

	if (!*p)
	{
		while (total > 1)
		{
			i = 0;
			while (i < sizeof(cents[i]))
			{
				if (total >= cents[i])
				{
					coins += total / cents[i];
					total = total % cents[i];
				}
				i++;
			}
		}
		if (total == 1)
			coins++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", coins);
	return (0);
}
