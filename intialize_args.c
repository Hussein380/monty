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
	arguments->stream = NULL;
	arguments->line = NULL;
}
