#include "monty.h"
/**
 * initialize_arguments - initialize pointer to args_s structure
 */
void initialize_arguments(void)
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
	{

		dprintf(2, "Error: malloc failed\n");
		free_arguments();
		exit(EXIT_FAILURE);
	}
	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		free_arguments();
		exit(EXIT_FAILURE);
	}
	arguments->stream = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;

}
