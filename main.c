#include "monty.h"

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

	validate_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1; /* tracking the line number of file */
		tokenize_line(); /* break line into words */
		get_instruction(); /* get the opcode from tokens array */
		run_instruction(); /* run the function associated with opcode */
		free_tokens(); /* free up memory for the tokens */
	}

	close_stream(); /* close stream */
	free_arguments(); /* free up memory allocated for the arguments pointer */

	return (0);
}
