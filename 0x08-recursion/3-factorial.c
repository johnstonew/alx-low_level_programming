#include "main.h"

/**
 * factorial - calculates factorial
 * @n: the number to loop
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
