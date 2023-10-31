#include "main.h"

/**
 * main - Adds positive numbers.i
 * @argc: argument count
 * @argv: arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 1;
	int n;
	int sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (argv[i])
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
