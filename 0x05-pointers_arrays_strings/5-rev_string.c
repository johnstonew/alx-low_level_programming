#include "main.h"
#include <string.h>

/**
 * rev_string - prints character to stdout in reverse
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;
	char *text = *s;

	for (i = strlen(text) - 1; i >= 0; i--)
	{
		printf("%c", text[i]);
	}
	printf("\n");
}
