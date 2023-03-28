#include <stdio.h>
#include "main.h"
/**
 * swap_int - function to swap values
 * @a : param that points to a
 * @b : param that points to b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
