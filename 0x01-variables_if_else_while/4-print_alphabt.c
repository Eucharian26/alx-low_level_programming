#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	char low;
	
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}

	putchar('\n');

	return (0);
}
