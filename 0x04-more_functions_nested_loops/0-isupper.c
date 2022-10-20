#include "main.h"

/**
 * isupper - checks for uppercase character
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	char c;

	int i = 'A';

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
