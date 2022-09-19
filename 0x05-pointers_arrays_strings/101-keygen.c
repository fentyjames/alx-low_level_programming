#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Generated a password
 */

int main(void)
{
	char k;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		k = rand() % 128;
		x += k;
		putchar(k);
	}
	putchar(2772 - x);

	return (0);
}
