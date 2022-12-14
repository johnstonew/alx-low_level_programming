#include "main.h"

/**
 * _islower - identify if it's lowest number
 * @c: The character to be inspected
 *
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
