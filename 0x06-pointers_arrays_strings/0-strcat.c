#include "main.h"

/**
 *_strcat - Concatenates the string pointed to @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: Returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
