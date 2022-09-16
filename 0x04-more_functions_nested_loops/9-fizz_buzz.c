#include <stdio.h>
/**
 * main - The “Fizz-Buzz test” is an interview question designed 
 * Return: nothing
 */
int main(void)
{
	int b = 1;

	while (b <= 100)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("FizzBuzz ");
		else if (b % 5 == 0)
		{
			if (b == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (b % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", b);
	b++;
	}
return (0);
}
