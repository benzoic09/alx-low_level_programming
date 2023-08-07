#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	char *buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return(0);
	}

