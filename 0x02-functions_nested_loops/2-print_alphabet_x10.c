#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int k;
	char d;

	for (k = 1; k <= 10; ++k)
	{
		for (d = 'a'; d <= 'z'; ++d)
			_putchar(d);
		_putchar('\n');
	}
}
