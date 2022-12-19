#include "main.h"

/**
 * swap_int - swap value of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
