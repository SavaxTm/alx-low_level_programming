#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints all the hours and minutes of a day
 * Return: void
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			printf("%02d", a);
			printf(":%02d\n", b);
		}
	}
}
