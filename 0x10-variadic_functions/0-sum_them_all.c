#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
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
	va_end(sta);
	return (sum);
}
