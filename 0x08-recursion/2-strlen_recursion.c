#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints the string length of a string
 * @s: current position in a string
 * Return: number of characters in the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
