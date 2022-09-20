#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * put2 - print every second character of a string
 *@str: string to print
 * Return: void
 */

void put2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < strlen(str); i += 2)
		putchar(str[i]);
	putchar('\n');
}
