#include "main.h"

/**
 * _sqrt_recursion - sqrt of a number
 * @n: int n
 * Return: interger
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt function
 * @n: integer
 * @i: integer
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
