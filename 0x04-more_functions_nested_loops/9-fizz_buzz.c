#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: Always (0).
 */

int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");

	return (0);
}
