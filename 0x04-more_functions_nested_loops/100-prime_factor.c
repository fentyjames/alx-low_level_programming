#include <stdio.h>

/**
*main- Print the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
	long numb = 612852475143;
	int inc;

	while (inc++ < numb / 2)
	{
	if (numb % inc == 0)
	{
		numb /= 2;
		continue;
	}

	for (inc = 3; inc < numb / 2; inc += 2)
	{
		if (numb % inc == 0)
			numb /= inc;
	}
	}
	printf("%ld\n", numb);
	return (0);
}
