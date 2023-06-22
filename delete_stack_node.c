#include "monty.h"

/**
* delete_stack_node - delete node at the head/top
* Return: void
*/
void delete_stack_node(void)
{
	stack_t *tmp;

	tmp = arguements->head;
	arguements->head = tmp->next;
	free(tmp);
}
