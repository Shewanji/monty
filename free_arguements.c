#include "monty.h"

/**
 * free_head - frees the memory allocated for the head and
 * sets it to NULL
 */

void free_head(void)
{
	if (arguements->head)
		free_stack(arguements->head);

	arguements->head = NULL;
}

/**
* free_arguements - free memory allocated to arguments pointer
*/

void free_arguements()
{
	if (arguements == NULL)
		return;

	if (arguements->instruction)
	{
		free(arguements->instruction);
		arguements->instruction = NULL;
	}

	free_head();

	if (arguements->line)
	{
		free(arguements->line);
		arguements->line = NULL;
	}

	free(arguements);
}
