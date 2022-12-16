#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number to be checked
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		for (; n > 0; n--)
		{
			putchar(95);
		}

		putchar('\n');
	}
}
