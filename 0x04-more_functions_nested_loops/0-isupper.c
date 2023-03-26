#include <stdio.h>
#include "main.h"
/**
 * _isupper - detects uppercase character
 *
 * @c : Parameter for getting uppercase alphabets
 *
 * Return: 1 (Success)
 * Onerror return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
