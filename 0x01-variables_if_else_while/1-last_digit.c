#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n%10 > 5)
	{
		printf("%s", "Last digit of ");
		printf("%d", n);
		printf("%s", " is ");
		printf("%d", n%10);
		printf("%s\n", " and is greater than 5");
	}
	if(n%10 == 0)
	{
		printf("%s", "Last digit of ");
		printf("%d", n);
		printf("%s", " is ");
		printf("%d", n%10);
		printf("%s\n", " and is 0");
	}
	if(n%10 < 6 && n%10 != 0)
	{
		printf("%s", "Last digit of ");
		printf("%d", n);
		printf("%s", " is ");
		printf("%d", n%10);
		printf("%s\n", " and is less than 6 and not 0");
	}
	/* your code goes there */
	return (0);
}
