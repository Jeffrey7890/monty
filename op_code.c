#include "monty.h"
#include "external.h"

/**
  * set_op_code_arg - sets the operation code argument
  * @code: code to check if valid
  * @lnumber: argument at that line
  * Return: -1 if failed and 0 success
  */
int set_op_code_arg(char *code, unsigned int *lnumber)
{
	int length, i;

	if (code == NULL)
		return (-1);

	length = strlen(code);

	for (i = 0; i < length; i++)
	{
		if (_isdigit(code[i]))
		{
			*lnumber = atoi(code);
			return (0);
		}
	}
	return (-1);
}

/**
  * _get_opcode - gets the operation code from the string line
  * @code: code from the monty file
  * Return: -1 if failed and index (i) success
  */
int _get_opcode(char *code)
{
	int i;

	if (code == NULL)
		return (-1);
	for (i = 0; i < OPCODE_LEN; i++)
		if (strcmp(code, opcode_arr[i]) == 0)
			return (i);
	return (-1);
}

/**
  * run_op_code - runs the line of code
  * @line: line of ocde
  * @line_number: the argument at that line
  * Return: 1 if works and -if failed
  */
int run_op_code(char *line, unsigned int line_number)
{
	char *token;

	int opcode;

	unsigned int lnumber;

	token = strtok(line, " ");
	opcode = _get_opcode(token);
	switch (opcode)
	{
		case PUSH:
			token = strtok(NULL, " ");
			if (token != NULL)
			{
				if (set_op_code_arg(token, &lnumber) < 0)
					print_err(line_number);
			}
			else
				print_err(line_number);
			push(&stack, lnumber);
			break;
		case PALL:
			pall(&stack);
			break;
		default:
			if (token != NULL)
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
				exit(EXIT_FAILURE);
			}
			break;
	}

	return (1);
}
