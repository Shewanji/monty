#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s -hold variables
 * @stream: file that connects to the stream from file
 *@line: string which will be line of text read from stream 
 */
typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
}arg_t;

extern arg_t *arguements;

/*FUNCTION PROTOTYPES*/
void initialize_arguements(void);
void malloc_failed(void);
void validate_arguements(int argc);
void get_stream(char *fileName);
void close_stream(void);
void free_arguments();
void run_instruction(void);
void tokenize_line(void);
void free_tokens(void);
void get_instruction(void);
void free_stack(stack_t *head);
int is_number(char *str);
void free_all_args(void);
void delete_stack_node(void);



#endif /*MONTY_H*/
