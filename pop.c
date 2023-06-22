#include "monty.h"

/**
 * pop - removes the top element from the stack
 * @stack: pointer to the stack
 * @line_number: line number where the pop function is called
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguements->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	delete_stack_node();
	arguements->stack_length -= 1;
}
