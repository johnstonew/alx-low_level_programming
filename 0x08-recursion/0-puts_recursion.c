#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints given letters
 * @s: characters
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", s[0]);
	_puts_recursion(s + 1);
}
