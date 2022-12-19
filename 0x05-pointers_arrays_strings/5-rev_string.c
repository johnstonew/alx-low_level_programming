#include "main.h"
#include <string.h>

/**
 * rev_string - prints character to stdout in reverse
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
