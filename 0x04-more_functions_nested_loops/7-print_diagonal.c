#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int n)
{
	int lenth, space;

	if (n > 0)
	{
		for (lenth = 0; lenth < n; lenth++)
		{
			for (space = 0; space < lenth; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (lenth == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
