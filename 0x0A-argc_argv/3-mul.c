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
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
