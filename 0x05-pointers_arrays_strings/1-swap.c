#include "main.h"

/**
* swap_int - swaps the value of int a and int b
*
* @a: first int ninput
* @b: second int input
* Return 0
*/

void swap_int(int *a, int *b)
{
		int holder;

		holder = *a;
		*a = *b;
		*b = holder;
}
