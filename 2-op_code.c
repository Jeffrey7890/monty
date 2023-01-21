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

/**
  * add - adds the top two elements of the stack
  * @stack: head of the stack
  * @line_number: line index in monty file
  */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	int n;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);

	(*stack)->n += n;
}

/**
  * sub - subs the top two elements of the stack
  * @stack: head of the stack
  * @line_number: line index in monty file
  */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	int n;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);

	(*stack)->n -= n;
}
