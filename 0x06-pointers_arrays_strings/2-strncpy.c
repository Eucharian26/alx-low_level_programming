#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: No of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
