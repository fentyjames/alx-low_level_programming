#include <stdio.h>
#include "main.h"

/**
*print_triangle - Prints a triangle
*@size:size parameter of triangle
*Return: returns nothing
*/

void print_triangle(int size)
{
	int inc, inc2;

	if (size > 0)
	{
		for (inc = 1; inc <= size; inc++)
		{
			for ((inc2 = size - inc); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc; inc2++)
			{
				putchar('#');
			}

			if (inc == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
