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
	int x = 97;
	int n = 65;

	while (x <= 122)
	{
		putchar (x);
		x++;
	}
	while (n <= 90)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
