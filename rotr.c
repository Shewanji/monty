#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the stack
 * @line_number: line number where the mul function is called
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *last;

	(void) stack;
	(void) line_number;
	if (arguements->stack_length < 2)
		return;

	tmp = arguements->head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			last = tmp;
			break;
		}
		tmp = tmp->next;
	}

	last->prev->next = NULL;
	last->next = arguements->head;
	last->prev = NULL;

	arguements->head = last;
}
