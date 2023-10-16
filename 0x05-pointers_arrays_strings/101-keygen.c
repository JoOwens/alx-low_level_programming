#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	int i = 0;
	int j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		j = rand() % 128;
		if ((i + j) > 2772)
			break;
		i = i + j;
		printf("%c", j);
	}

	printf("%c\n", (2772 - i));
	return (0);
}
