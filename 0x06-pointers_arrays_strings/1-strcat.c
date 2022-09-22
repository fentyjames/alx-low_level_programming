#include "main.h"
/**
 *_strncat - Concatenate two strings and add  the inputted number of bytes
 *@dest: String to be appended upon
 *@src: String to be completed at end of dest
 *@n:integer Parameter to compare index to
 *Return: Returns the new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);

}
