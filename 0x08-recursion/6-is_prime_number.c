#include <stdio.h>

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: integer
 */

int is_prime_number(int n)
{
	 if (n <= 1)
		 return (0);
	  if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		   return (0);
	  if (n % n == 0)
		  return (1);
}
