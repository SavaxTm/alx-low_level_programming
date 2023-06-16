#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return NULL;
	}
	memset(ptr, 0, total_size);
	return (ptr);
}
