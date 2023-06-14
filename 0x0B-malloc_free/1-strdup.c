#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry point
 * @str: parameter for string
 * Return: d
 */
char *_strdup(char *str)
{
	size_t len;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	d = malloc((len + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}

