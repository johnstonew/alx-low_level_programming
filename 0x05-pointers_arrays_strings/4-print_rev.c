#include "main.h"
#include <string.h>

/**
 * print_rev - prints character to stdout in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) -1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
