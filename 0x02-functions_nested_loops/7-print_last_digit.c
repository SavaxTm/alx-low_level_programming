#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @int : parameter of number to be checked
 * Return: last digit k
 */
int print_last_digit(int);
int print_last_digit(int c)
{
	int k;

	if (c < 0)
	{
		c = c * -1;
	}
	k = c % 10;
	if (k < 0)
	{
		k = k * -1;
	}
	_putchar (k + '0');
	return (k);
}
