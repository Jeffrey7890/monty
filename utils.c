#include "monty.h"


/**
  * open_file - opens the file with fopen and checks for errors
  * @file_name: name of the file
  * Return: FILE stream pointer
  */
FILE *open_file(const char *file_name)
{
	FILE *file = fopen(file_name, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	return (file);
}

/**
  * check_file_extension - checks the file extension for .m
  * @file_name: name of file
  */
void check_file_extension(const char *file_name)
{
	const char *ext;

	ext = file_name + (strlen(file_name) - 2);

	/* check if file_name end with .m extension */
	if (strcmp(ext, ".m") != 0)
	{
		printf("File must end with .m\n");
		exit(EXIT_FAILURE);
	}
}
