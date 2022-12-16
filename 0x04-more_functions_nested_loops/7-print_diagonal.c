#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number to be checked
 */

void print_diagonal(int n)
{
	int y, x;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(32);
			}

			putchar(92);
			putchar('\n');
		}
	}
}
