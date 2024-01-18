#include "monty.h"
/**
 * free_head - frees memory allocated to head and sets it to nULL
 */
void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);

	arguments->head = NULL;
}
