#include "monty.h"

/*
 * validate_arguements - checks the number of command line arguements
 * @argc: the number of command line arguements
 */

void validate_arguements(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
