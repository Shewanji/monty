#include "monty.h"

/**
 * free_tokens - frees the allocated memory for tokens
 */

void free_tokens(void)
{
	int i = 0;

	if (arguements->tokens == NULL)
		return;

	while (arguements->tokens[i])
	{
		free(arguements->tokens[i]);
		i++;
	}
	free(arguements->tokens);
	arguements->tokens = NULL;
}
