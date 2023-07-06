#include "main.h"
/**
 * factorial - calculates factorial of any number
 * @n: the number whose factorial is to be calculated
 * Return: -1 when n < 0, 1 when n == 0, and factorial when n
 * > 0 using recursion
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
