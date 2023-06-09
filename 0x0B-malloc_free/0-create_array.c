#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point of program
 * @size: Parameter that determines size of char
 * @c: parameter for output
 * Return: returns ar
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
