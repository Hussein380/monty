#include "monty.h"
/**
 * get_instruction - Sets the instruction based on the first token
 */
void get_instruction(void)
{
	int i = 0;

	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall},
		{NULL, NULL}
	};
	/*checks if there are no tokens*/
	if (arguments->n_tokens == 0)
		return;
	/*iterate through the array f instrructions*/
	for (; instructions[i].opcode != NULL; i++)
	{
		/*Compare the current token with the opcode of current insruction*/
		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
		{
			/*Populate the instruction member of thr arguments strc*/
			arguments->instruction->opcode = instructions[i].opcode;
			arguments->instruction->f = instructions[i].f;
			return;
		}
	}
	/*if the instruction is not found,handle S INVALID INStruction*/
	invalid_instruction();
}
