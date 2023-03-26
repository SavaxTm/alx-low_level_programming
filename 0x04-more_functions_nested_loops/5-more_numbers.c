#include "main.h"
/**
 * more_numbers - prints the numbers 0-14
 *
 * @param i - Parameter that prints the numbers 10 times
 * @param j - Parameter that prints numbers 0-14
 *
 * Return - void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar(j % 10 + '0');
		}	
	_putchar('\n');
	}
}
