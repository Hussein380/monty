#include "monty.h"
/**
 * is_number - checks if a string represent a valid intager number
 * @str: The string to check
 * Return: 1 of the string is a valid number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
