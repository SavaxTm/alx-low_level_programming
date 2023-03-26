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
	int z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z && x != y && x != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x + y + z != 168)
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
