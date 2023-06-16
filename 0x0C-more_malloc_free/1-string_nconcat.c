#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates 2 strings with n of 2nd
 * @s1: first string
 * @s2: second string
 * @n: no of bytes of second string used
 * Return: t;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
	unsigned int s1_l = strlen(s1);
	unsigned int s2_l = strlen(s2);
	unsigned int rl = s1_l + n;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_l)
		n = s2_l;

	t = (char *)malloc((rl + 1) * sizeof(char));
	if (t == NULL) {
		return NULL;
	}
	strcpy(t, s1);
	strncat(t, s2, n);
	return (t);
}
