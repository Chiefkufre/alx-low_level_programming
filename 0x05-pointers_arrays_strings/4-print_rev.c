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
	int len = 0;
	int i;

	/*Find the length of the string*/
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* Return to the last character before null */
	s--;

	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

