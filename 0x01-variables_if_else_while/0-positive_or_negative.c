#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)/**
	 * main - Entry point
	 *
	 * Return: Always 0 (Success)
	 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d", n);
		printf("%s\n", " is positive");
	}
	if (n < 0)
	{
		printf("%d", n);
		printf("%s\n", " is negative");
	}
	if (n == 0)
	{
		printf("%d", n);
		printf("%s\n", " is zero");
	}
	/* your code goes there */
	return (0);
}
