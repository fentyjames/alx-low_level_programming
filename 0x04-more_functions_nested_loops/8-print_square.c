#include <stdio.h>
#include "main.h"

/**
*print_square - Function to prints squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int size)
{
	int inc, inc2;

	if (size > 0)
	{
		for (inc = 0; inc < size; inc++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
