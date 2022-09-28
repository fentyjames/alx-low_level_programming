#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a : square matrix array
 * @size : size of the array
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, leadSum = 0, antidiagSum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			leadSum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			antidiagSum += *(a + i);
	}

	printf("%d, %d\n", leadSum, antidiagSum);
}
