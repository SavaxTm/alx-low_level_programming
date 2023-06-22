#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calclates sum of numbers
 * @n: parameter for numbers count
 * Return: 0 and Sum;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list sta;

	va_start(sta, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sta, int);
	}
	if (n == 0)
	{
		return (0);
	}
	va_end(sta);
	return (sum);
}
