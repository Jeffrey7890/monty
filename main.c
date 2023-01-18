#include "monty.h"
#include <stdio.h>


#define MAX_LINE 1024


/**
  * main - main fucntion for monty
  * @ac: number of cmdline args
  * @argv: cmdline args
  * Return: 0
  */
int main(int ac, char **argv)
{
	char *file_name, line[MAX_LINE];

	int line_count = 0;

	FILE *file;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_name = argv[1];

	check_file_extension(file_name);
	file = open_file(file_name);

	/* main loop */
	while (fgets(line, sizeof(line), file))
	{
		line_count++;
		printf("%s", line);
	}

	printf("line count: %d\n", line_count);
	fclose(file);
	return (0);
}
