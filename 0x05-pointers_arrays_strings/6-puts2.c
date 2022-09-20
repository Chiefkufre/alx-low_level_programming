#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen = return string lenght
 *@s: string
* Return: string length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * put2 - print every second character of a string
 *@str: string to print
 * Return: void
 */

void put2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		putchar(str[i]);
	putchar('\n');
}
