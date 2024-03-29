#include  "monty.h"
#include <stdio.h>
/**
 * pall - prints all element in the stack
 * @stack: pointer to the stack
 * @line_number: line number where the pal fucntion is called
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	tmp = arguments->head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
