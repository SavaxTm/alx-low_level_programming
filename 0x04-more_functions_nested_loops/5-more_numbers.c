#include "main.h"
/**
 * more_numbers - prints the numbers 0-9
 *
 * @param i - Parameter that prints the numbers 10 times
 * @param j - Parameter that prints numbers 0-9
 *
 * Return - void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}	
	_putchar('\n');
	}
}
