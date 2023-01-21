#include "monty.h"

void fprint_err(const char *fmessage, unsigned int line_number)
{
	fprintf(stderr, fmessage, line_number);
	exit(EXIT_FAILURE);
}
