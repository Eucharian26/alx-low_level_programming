#include "main.h"

/**
 * isdigit - Entry point
 * Description: checks for digit
 * @c: The number to be checked
 * Return: 1 if true. 0 if false.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
