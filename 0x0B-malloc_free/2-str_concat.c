#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: parameter to store string
 * @s2: parameter to store string
 * Return: st
 */
char *str_concat(char *s1, char *s2)
{
	char *st;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	/*if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}*/
	if (s1 == NULL && s2 == NULL)
	{
	s1 = s2 = ("");
	}

	st = malloc((len1 + len2 + 1) * sizeof(char));
	if (st == NULL)
	{
		return (NULL);
	}
	strcpy(st, s1);
	strcat(st, s2);
	return (st);
}
