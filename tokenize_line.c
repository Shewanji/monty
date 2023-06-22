#include "monty.h"

/**
 * tokenize_line - tokenizes the line read from file
 */

void tokenize_line(void)
{
	int i = 0;
	char *delims = " \n", *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(arguements->line) + 1));
	strcpy(linecpy, arguements->line);
	arguements->n_tokens = 0;
	token = strtok(linecpy, delims);
	while (token)
	{
		arguements->n_tokens += 1;
		token = strtok(NULL, delims);
	}

	arguements->tokens = malloc(sizeof(char *) *
			(arguements->n_tokens + 1));
	strcpy(linecpy, arguements->line);
	token = strtok(linecpy, delims);
	while (token)
	{
		arguements->tokens[i] = malloc(sizeof(char) *
				(strlen(token) + 1));
		if (arguements->tokens[i] == NULL)
			malloc_failed();
		strcpy(arguements->tokens[i], token);
		token = strtok(NULL, delims);
		i++;
	}
	arguements->tokens[i] = NULL;
	free(linecpy);
}
