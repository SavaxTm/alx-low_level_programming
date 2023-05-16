#include "main.h"
/**
 * print_sign - prints sign of given character
 * @n : parameter for the character to be checked
 * Return : 1 if its positive, 0 if zero and -1 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
