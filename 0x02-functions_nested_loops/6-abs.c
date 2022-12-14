#include "main.h"

/**
 * _abs - identify if it's lowest number
 * @c: The character to be inspected
 *
 * Return: 1 for lowercase character or 0 for anything else
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_no;

		abs_no = c * -1;

		return (abs_no);
	}
	return (c);
}
