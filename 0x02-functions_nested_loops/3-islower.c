#include "main.h"

/*
 * _islower: identify if it's lowest number
 */

_islower(int c)
{
	if (islower(c))
	{
		putchar(1 + '0');
	}
	else
	{
		putchar(0 + '0');
	}
}
