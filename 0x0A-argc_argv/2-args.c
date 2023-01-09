#include <stdio.h>

/**
 * main - main program entry
 * @argc: argument count
 * @argv: strings in argument
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
