#include "main.h"

/**
 * print_triangle - prints a triangle using # character.
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 0; hash < size; has++)
		{
			for (index = size - hash; index > 1; index--)
			{
				_putchar(' ');
			}

				for (index = 0; index <= hash; index++)
				{
					_putchar('#');
				}
				if (hash == size)
				{
				continue;
				}
				_putchar('\n');
		}
	}

	_putchar('\n');
}
