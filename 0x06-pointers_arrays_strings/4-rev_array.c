#include "main.h"

/**
 * reverse_array - Function that reverse array contents
 * @a: function parameter,array
 * @n: function parameter, number of items
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
