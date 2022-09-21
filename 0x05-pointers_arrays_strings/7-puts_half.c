#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * puts_half - prints half of a string. followed by a new line
 *@str: string to print
 */

void puts_half(char *str)
{
	int num;
	int len = strlen(str);

	if (len % 2 != 0)
		num = (len / 2) + 1;
	else
		num = (len / 2);

	while (num < len)
	{
		putchar(*(str + num));
		num++;
	}
	putchar('\n');
}
