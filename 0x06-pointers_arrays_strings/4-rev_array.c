#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - reverse array elements
 *@a: array to rverse
 *@n: number of element in array
 */

void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
