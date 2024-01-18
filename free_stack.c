#include "monty.h"
/**
 * free_stack - frees the nodes in a stack list
 * @head: first node of distint link
 * Return: void
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}
