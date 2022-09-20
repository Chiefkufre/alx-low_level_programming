#include <stdio.h>

/**
 * swap_int - swaps value of 3 integers
 * @b: integer 1 to swap
 * @a: integer 2 to swap
 */

void swap_int(int *a, int *b)
{
	int num1;

	num1 = *a;
	*a = *b;
	*b = num1;
}

