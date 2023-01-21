#include "monty.h"

/**
  * fprint_err - prints formated error message
  * @fmessage: formated message
  * @line_number: line index of file
  */
void fprint_err(const char *fmessage, unsigned int line_number)
{
	fprintf(stderr, fmessage, line_number);
	exit(EXIT_FAILURE);
}
