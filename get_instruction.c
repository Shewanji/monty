#include "monty.h"

/**
 * invalid_instruction - Handles an unknown instruction error.
 */

void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			arguements->line_number, arguements->tokens[0]);
	free_all_args();
	exit(EXIT_FAILURE);
}

/**
 * get_instruction - Sets the instruction based on the first token
 * in the input line.
 */

void get_instruction(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"div", &_div}, {"mul", &mul},
		{"rotl", &rotl}, {"rotr", &rotr},
		{"stack", &stack}, {"queue", &queue},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"mod", &mod},
		{NULL, NULL}
	};

	if (arguements->n_tokens == 0) /* no instructions */
		return;
	if (arguements->tokens[0][0] == '#')
	{
		arguements->instruction->opcode = "nop";
		arguements->instruction->f = nop;
		return;
	}
	for (; instructions[i].opcode != NULL; i++)
	{
		/* compare opcode of instruction to first token (instruct..) */
		if (strcmp(instructions[i].opcode, arguements->tokens[0])
				== 0)
		{
			arguements->instruction->opcode = instructions[i].opcode;
			arguements->instruction->f = instructions[i].f;
			return;
		}
	}
	invalid_instruction();
}
