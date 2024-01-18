#include "monty.h"
#include <stdio.h>
arg_t *arguments = NULL;
/**
 * main - entry point
 * @argc: the number of commandline arguments
 * @argv: A pointer to an array of string containing
 * the command line arguments
 * Return: 0 on succcess
 */

int main(int argc, char **argv)
{
	size_t n = 0;

	correct_arguments(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;/*tracking the line number of file*/
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();
	}
	close_stream();
	free_arguments();

	return (0);
}
