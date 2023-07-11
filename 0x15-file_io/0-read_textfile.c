#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: filename
 * @letters: used to store number of letters in the buffer
 * Return: returns 0 for most cases and returns byteWritten
 * at the end of the program
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	FILE *name;

	if (filename == NULL)
	{
		return (0);
	}
	name = fopen(filename, "r");
	if (name == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(name);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, name);
	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(name);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	fclose(name);
	if (bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesWritten);
}
