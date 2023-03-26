#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints the alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar (x);
		x++;
	}
	putchar ('\n');

	return (0);
}
