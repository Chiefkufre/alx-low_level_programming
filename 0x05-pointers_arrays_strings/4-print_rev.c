#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - print string in reverse
 *@s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int *i;

	for (i = strlen(*s); i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

