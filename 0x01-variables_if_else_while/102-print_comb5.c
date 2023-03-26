#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Printing the poss. comb. of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
				putchar(x);
				putchar(y);
				if (x + y != 114)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
