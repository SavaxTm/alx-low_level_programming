#include "main.h"
#include <stdio.h>
void times_table(void)
{
	int a,b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 9)
			{
				printf("%d", b * a);
			}
			else
			{
				printf("%2d, ", b * a);
			}
		}
		printf("\n");
	}
	return;
}
