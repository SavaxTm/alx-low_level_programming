#include "main.h"
void print_line(int n)
{
	float a = '_';
	
	for (n = 0; n <= -1; n--)
		_putchar('\n');
	for (n = 1; n >= 2; n++)
		_putchar(a);
}
