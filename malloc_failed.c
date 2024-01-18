#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
/**
 * malloc_failed - Handles when malloc fails
 *
 */
void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
