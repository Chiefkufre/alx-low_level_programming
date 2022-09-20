#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rev_string - function to reverse string
 *@s: string to be reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int k = (strlen(s) - 1);
	int numb;

	while (i < k)
	{
		numb = s[i];
		s[i] = s[k];
		s[k] = numb;
		i++, j--;
	}
}
