#include "monty.h"
/**
 * initialize_arguments - initialize pointer to args_s structure
 */
void initialize_arguments(void)
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
	{
		malloc_failed();
	}
	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();
	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
	arguments->head = NULL;
	arguments->stack_length = 0;


}
