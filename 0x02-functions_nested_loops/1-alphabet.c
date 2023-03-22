/* #include <stdio.h> */
#include "_putchar.c"
#include "1-main.c"
/**
* print_alphabet - Entry point
*
* Return - Always 0 (Success)
*/
extern void print_alphabet(void)
{
	int x;
		for (x = 'a'; x <= 'z'; ++x);

		putchar(x);

	return;
}
