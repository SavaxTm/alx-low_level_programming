#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints all digits of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar (x);
		if (x == 57)
			continue;
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
