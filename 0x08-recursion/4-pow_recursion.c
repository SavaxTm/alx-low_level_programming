#include "main.h"
/**
 * _pow_recursion - prints a number to tge power of the other
 * @x: the base number
 * @y: the exponent
 * Return: -1 if y < 0, 1 if y == 0 and x ^ y if y > 0 using 
 * recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
