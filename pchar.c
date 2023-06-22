#include "monty.h"

/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack: pointer to the stack
 * @line_number: line number where the mul function is called
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;

	(void) stack;
	if (arguements->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguements->head;

	if (tmp1->n < 0 || tmp1->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", tmp1->n);
}
