#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - creates and writes into a file
 * @filename: name of the file to be created
 * @text_content: content of the file created
 * Return: returns 1 for success, otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "w");
	if (file == NULL)
	{
		return (-1);
	}
	chmod(filename, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		if (fprintf(file, "%s", text_content) < 0)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}
