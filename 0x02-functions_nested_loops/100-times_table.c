#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints times table
 * @n : parameter to input number
 */
void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b >= n)
			{
				printf("%3d", a * b);
			}
			else if (b == 0)
			{
				printf("%d,", a * b);
			}
			else
			{
				printf("%3d, ", a * b);
			}
		}
		printf("\n");
	}
}
