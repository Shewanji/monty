#include "monty.h"

arg_t *arguements = NULL;

/**
 * main - entry point of a program
 * @argc: the number of command-line arguments
 * @argv: pointer to an array of strings containing
 * the command line arguments
 * Return: returns 0 (Success)
 */
int main(int argc, char **argv)
{
	size_t n = 0;

	validate_arguements(argc);
	initialize_arguements();
	get_stream(argv[1]);

	while (getline(&arguements->line, &n, arguements->stream) != -1)
	{
		arguements->line_number += 1; /* tracking the line number of file */
		tokenize_line(); /* break line into words */
		get_instruction(); /* get the opcode from tokens array */
		run_instruction(); /* run the function associated with opcode */
		free_tokens(); /* free up memory for the tokens */
	}

	close_stream(); /* close stream */
	free_arguements(); /* free up memory allocated for the arguments pointer */

	return (0);
}
