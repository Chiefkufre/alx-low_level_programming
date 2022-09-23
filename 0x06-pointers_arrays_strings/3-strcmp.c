#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * *_strcmp - compare ttwo strings
 *@s1: first string
 *@s3: second string
 * Return: nt with ums inbetween
 */

int _strcmp(char *s1, char *s3)
{
	int i = 0;

	while (*(s1 + i) == *(s3 + i) && *(s1 + i))
		i++;
	if (*(s3 + i))
		return (*(s1 + i) - *(s3 + i));
	else
		return (0);
}

