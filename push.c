#include "monty.h"

/**
 * push - pushes an integer onto the stack
 * @stack: pointer to the stack
 * @line_number: line number where the push function is called
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (arguements->n_tokens <= 1 || !(is_number(arguements->tokens[1])))
	{
		free_arguements();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(arguements->tokens[1]);
	if (arguements->head == NULL)
		arguements->head = *stack;
	else
	{
		if (arguements->stack)
		{
			(*stack)->next = arguements->head;
			arguements->head->prev = *stack;
			arguements->head = *stack;
		}
		else
		{
			stack_t *tmp = arguements->head;

			while (tmp->next)
				tmp = tmp->next;
			tmp->next = *stack;
			(*stack)->prev = tmp;
		}
	}
	arguements->stack_length += 1;
}
