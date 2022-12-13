#include <stdio.h>

/**
 * print_alphabet - prints alphabets
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

