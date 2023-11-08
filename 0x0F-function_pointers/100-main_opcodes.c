#include "function_pointers.h"

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int byt;
	int i = 0;
	int (*p)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < byt)
	{
		opcode = *(unsigned char *)p;
		printf("%.2x", opcode);

		if (i != byt - 1)
		{
			printf(" ");

			p++;
		}
		i++;
	}

	printf("\n");

	return (0);
}
