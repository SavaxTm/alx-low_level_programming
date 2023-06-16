#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory space
 * @b: number of bytes to be allocated
 * @t: pointer to be returned
 * Return: t
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
