#include "monty.h"

/**
  * mod - computes the rest of the division
  * @stack: top of the stack
  * @line_number: line index of file
  */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	int n;

	if ((*stack == NULL) || ((*stack)->next == NULL))
		fprint_err("L%d: can't mod, stack too short\n", line_number);
	n = (*stack)->n;

	if (n == 0)
		fprint_err("L%d: division by zero\n", line_number);

	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);

	(*stack)->n %= n;
}
