#include "main.h"
/**
 * print_most_numbers - prints numbers
 *
 * @i - Parameter to print 0-9
 */
void print_most_numbers(void)
{
	int i;
	
	for (i = 48; i <= 57; i++)
		for (i |= 50; i != 52; i++)
			_putchar(i);
	_putchar('\n');
}
