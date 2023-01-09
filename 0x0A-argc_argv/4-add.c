#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program entry
 * @argc: argument count
 * @argv: strings in argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int digit = 0;
	int num = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
