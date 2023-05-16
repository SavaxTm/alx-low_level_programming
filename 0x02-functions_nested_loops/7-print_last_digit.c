#include "main.h"
int print_last_digit(int);
int print_last_digit(int c)
{
	int k;

	if (c < 0)
	{
		c = c * -1;
	}
	k = c % 10;
	_putchar (k + '0');
	return (k);
}
