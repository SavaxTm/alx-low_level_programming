#include "main.h"
/**
 * _islower - checks for lowercase letters
 *
 * @c -  parameter to be printed
 *
 * Return: 1 (Success)
 * Onerror: return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
