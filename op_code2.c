#include "monty.h"

/**
  * swap - swaps the top two elements of the stack
  * @stack: head of the stack
  * @line_number: index in monty file
  */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;

	(*stack)->prev = tmp;
	(*stack)->next = tmp->next;

	tmp->next->prev = *stack;
	tmp->next = *stack;
	tmp->prev = NULL;
	*stack = tmp;
}


