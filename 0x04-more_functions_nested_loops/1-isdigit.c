#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry Point
 *
 * @Param c - Parameter to determine integers
 *
 * Return: 1 (Success)
 * Onerror return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
