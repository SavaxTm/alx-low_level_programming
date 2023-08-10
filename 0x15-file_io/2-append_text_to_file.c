#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text_content: text to append
 * Return: -1 upon failure and 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (fprintf(file, "%s", text_content) < 0)
		{
			fclose(file);
			return (-1);
		}
		else
		{
			fclose(file);
			return (1);
		}
	}
	else
	{
		fclose(file);
	}
	fprintf(file, "%s", text_content);
	fclose(file);
	return (1);
}
