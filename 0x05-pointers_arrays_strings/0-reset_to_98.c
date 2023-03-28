#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - resets value of variable
 * @j : pointer that resets value to 98
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int *j;

	j = n;
	*j = 98;
}
