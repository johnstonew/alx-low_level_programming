#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print in reverse
 * @s: string to loop
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
