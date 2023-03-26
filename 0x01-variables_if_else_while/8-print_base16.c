#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - prints alphabets in both cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int n = 97;

	while (x <= 57)
	{
		putchar (x);
		x++;
	}
	while (n <= 102)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
