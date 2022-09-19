#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of array elements
 * @n: Function parameter
 * @a: Function parameter
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
