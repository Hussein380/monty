#define _GNU_SOURCE
#include "monty.h"

#include <stdio.h>
/**
 * invalid_instruction - Handles  an unknown instruction error
 */
void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			arguments->line_number, arguments->tokens[0]);
	close_stream();
	free_tokens();
	free_arguments();
	exit(EXIT_FAILURE);
}
