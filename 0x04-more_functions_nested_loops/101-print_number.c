#include "main.h"

/**
 * print_number - Print an integer
 * @n: random integers
 *Return: void
 **/

void print_number(int n)
{
	char ln, cr;
	int r;
	int cn = 0;

	if (n < 0)
	{
		_putchar ('-');
		ln = (char)('0' - (n % 10));
		n = n / -10;
	}

		else
		{
			ln = (char)((n % 10) + '0');
		n = n / 10;
	}

	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n = n / 10;
		cn++;
	}

	while (r > 0)
	{
		cr = (char)((r % 10) + '0');
		_putchar(cr);
		r = r / 10;
		cn--;
	}
	while (cn != 0)
	{
		_putchar('0');
			cn--;
	}
	_putchar(ln);
}
