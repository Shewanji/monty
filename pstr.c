#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * followed by a new line
 * @stack: pointer to the stack
 * @line_number: line number where the mul function is called
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;

	(void) stack;
	(void) line_number;

	tmp1 = arguements->head;

	while (tmp1 != NULL)
	{
		if (tmp1->n <= 0 || tmp1->n > 127)
			break;
		printf("%c", tmp1->n);
		tmp1 = tmp1->next;
	}

	printf("\n");
}
