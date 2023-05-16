#include "main.h"
/**
 * _abs - Entry Point
 * @c : parameter that returns absolute value
 * Return: c if positive and c * -1 if negative
 */
int _abs(int);
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
		return (c);
	}
	else
		return (c);
}
