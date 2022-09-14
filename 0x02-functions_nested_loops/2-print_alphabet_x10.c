#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 *  function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int alpha;
	int alpha1;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
		{
			_putchar(alpha1);
		}
		_putchar('\n');
	}
}
