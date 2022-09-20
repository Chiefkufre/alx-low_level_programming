#include <stdio.h>

/**
 * _strlen - returb string length
 *@s: the string
 * Return: length of string
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
