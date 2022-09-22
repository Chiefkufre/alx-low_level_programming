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
	int i;
	int dest_len;

	for (dest_len = 0; dest(dest_len) != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);
}

