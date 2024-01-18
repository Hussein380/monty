#define _GNU_SOURCE
#include "monty.h"

#include <stdio.h>
/**
 * pop - Removes the top_element from the stack
 * @stack: pointer to the stack
 * @line_number: line number where the pop function is called
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	delete_stack_node();
	arguments->stack_length -= 1;
}
