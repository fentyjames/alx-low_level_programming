#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: prints s
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
