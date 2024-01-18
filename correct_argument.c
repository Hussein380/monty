#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
/**
 * correct_arguments - checks for correct number of cmd
 * @argc: the number of cmd arguments
 */
void correct_arguments(int argc)
{
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
