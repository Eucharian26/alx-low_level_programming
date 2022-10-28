#include "main.h"

/**
 *  _strncat - Concatenates two strings
 *  @dest: The destination value
 *  @src: The source value
 *  @n: The limit of the concatenation
 *
 *  Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
