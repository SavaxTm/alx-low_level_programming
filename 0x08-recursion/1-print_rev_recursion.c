#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints the entire characters of a s
 * tring in reverse order
 * @s: The current character in the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
}
