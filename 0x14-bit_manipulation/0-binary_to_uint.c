#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to string of 0 and 1;
 * Return: returns tge converted value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			value <<= 1;
			value += (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
