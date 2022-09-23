#include <string.h>
#include <stdio.h>
#include <stdlib>

/**
 * _strcat - concatenate two strings
 *@dest: string to append to
 *@src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int k = 0;
	int j = 0;

	while (dest[k] != '\0')
		k++;

	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}
