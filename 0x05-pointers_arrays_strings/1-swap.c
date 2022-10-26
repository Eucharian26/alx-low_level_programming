#include "main.h"

/**
 * swap_int - swaps the values of 2 integers.
 * @a: first integer to be swaped
 * @b: secong integer to be swaped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
