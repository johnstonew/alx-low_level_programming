#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @n: number to be checked
 */

void print_square(int n)
{
	int y, x;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				putchar(35);
			}

			putchar('\n');
		}
	}
}
