#include "main.h"
#include <stdio.h>

/**
 * puts2 - Returns every other two letters and a new line
 *
 * @str: Function parameters
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
