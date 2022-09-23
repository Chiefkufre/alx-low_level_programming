#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * *_strncat - concatenates n byptes of two strings
 *@dest: pointer destination
 *@n: number of bytes
 *@src: pointer sourc
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

