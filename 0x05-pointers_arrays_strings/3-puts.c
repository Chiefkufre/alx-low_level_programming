#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - print string followed by new line to stdout
 *@str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}

