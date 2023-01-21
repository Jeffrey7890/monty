#include "monty.h"


/**
  * swap - swaps the top two elements of the stack
  * @stack: head of the stack
  * @line_number: index in monty file
  */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *tmp_next;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	tmp_next = tmp->next;

	(*stack)->next = tmp_next;
	if (tmp_next != NULL)
		tmp_next->prev = (*stack);
	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->prev = NULL;
	*stack = tmp;

}


