#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print in reverse
 * @s: string to loop
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;

	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	while (len > 0)
	{
		printf("%c", s[len]);
		 len--;
	}
}
