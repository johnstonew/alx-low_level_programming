#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	x++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

