#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top element
 * @stack: pointer to the stack
 * @line_number: line number where the sub function is called
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguements->stack_length < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguements->head;
	tmp2 = tmp1->next;

	tmp2->n = tmp2->n - tmp1->n;
	delete_stack_node();

	arguements->stack_length -= 1;
}
