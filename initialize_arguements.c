#include "monty.h"

/**
 * initialize_arguements - Initializes a pointer to
 * arg_s structure.
 */
void initialize_arguements(void)
{
	arguements = malloc(sizeof(arg_t));
	if (arguements == NULL)
		malloc_failed();

	arguements->instruction = malloc(sizeof(instruction_t));
	if (arguements->instruction == NULL)
		malloc_failed();

	arguements->stream = NULL;
	arguements->head = NULL;
	arguements->line = NULL;
	arguements->n_tokens = 0;
	arguements->line_number = 0;
	arguements->stack_length = 0;
	arguements->stack = 1;
}
