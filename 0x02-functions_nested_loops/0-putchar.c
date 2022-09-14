#include "main.h"
/**
 * main - Entry point
 * Print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *putchar = "_putchar";

	while (*putchar)
	{
		_putchar(*putchar);
		putchar++;
	}
	_putchar('\n');

	return (0);
}
