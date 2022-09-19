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
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar('\n');
}
