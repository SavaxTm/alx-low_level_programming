#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that prints length of string
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
