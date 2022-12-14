#include "main.h"

/**
 *  print_last_digit - identify if it's lowest number
 * @n: The character to be inspected
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int print_last_digit(int n)
{
	int last_no;

	last_no = n % 10;

	if (last_no < 0)
	{
		last_no *= -1;
	}

	_putchar(last_no + '0');

	return (last_no);
}
