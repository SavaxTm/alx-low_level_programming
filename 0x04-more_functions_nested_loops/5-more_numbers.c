#include "main.h"
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
