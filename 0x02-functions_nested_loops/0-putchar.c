#include <stdio.h>
#include <main.h>
/**
 * main - Entry point
 * Print put to char
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char *ch = "_putchar\n";

	while (*ch)
	{

		_putchar(*ch);
		ch++;
	}
	return (0);
}
