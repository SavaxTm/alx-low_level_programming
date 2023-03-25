#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 *
 * @i - parameter that assigns a random number
 *
 * Return: void
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
        {
		printf("%d", i);
		printf("%s\n", " is positive");
	}
        if (i < 0)
        {
		printf("%d", i);
		printf("%s\n", " is negative");
	}
	if (i == 0)
	{
		printf("%d", i);
		printf("%s\n", " is zero");
	}
/* your code goes there */
	return;
}
