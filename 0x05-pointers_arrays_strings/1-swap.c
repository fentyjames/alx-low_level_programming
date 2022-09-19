#include "main.h"

/**
*swap_int - Swaps two integers' values
*@a: First integer
*@b: Second integer
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
