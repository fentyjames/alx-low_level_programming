#include "main.h"
/**
 * _islower -a function to checks for lowercase character.
 *
 * @c: parameter for the _islower function
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
