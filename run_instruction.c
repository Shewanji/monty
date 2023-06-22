#include "monty.h"

/**
 * run_instruction - Runs the instruction specified by the arguments.
 */

void run_instruction(void)
{
	stack_t *stack = NULL;

	if (arguements->n_tokens == 0)
		return;

	arguements->instruction->f(&stack, arguements->line_number);
}
