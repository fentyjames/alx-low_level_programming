#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Returns string in reverse
 *
 * @s: Function parameter
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	n = n - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
