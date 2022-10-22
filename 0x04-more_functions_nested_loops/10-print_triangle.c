#include "main.h"

/**
 * print_triangle - prints a triangle using # character.
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int hash, index, ash;

	if (size > 0)
	{
		for (hash = 0; hash < size; hash++)
		{
			for (index = size - hash; index > 1; index--)
			{
				_putchar(' ');
			}

				for (ash = 0; ash < hash; ash++)
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
