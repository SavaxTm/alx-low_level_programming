#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @int : parameter of number to be checked
 * @k : parameter of the last digit obtained
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
	_putchar (k + '0');
	return (k);
}
