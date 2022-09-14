#include "main.h"
/**
 * main - Entry point
 * Print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *putcha = "_putchar";

	while (*putcha)
	{
		_putchar(*putcha);
		putcha++;
	}
	_putchar('\n');

	return (0);

}

