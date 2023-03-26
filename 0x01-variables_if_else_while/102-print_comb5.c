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
	int i;
	int j;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (i = 48; i <= 57; i++)
			{
				for (j = 48; j <= 57; j++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(i);
					putchar(j);
					if (x + y + i + j != 228)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
