#include "monty.h"

/**
 * malloc_failed - handles error when malloc fails to allocate
 * memory
 */
void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arguements();
	exit(EXIT_FAILURE);
}
