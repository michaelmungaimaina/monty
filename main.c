#include "monty.h"
#include <stdio.h>

bus_type bus = {NULL, NULL, NULL, 0};

/**
* main - Monty code interpreter
* @argument_count: number of arguments
* @argument_values: Monty file location
* Return: 0 on success
*/
int main(int argument_count, char *argument_values[])
{
	char *line_content;
	FILE *monty_file;
	size_t buffer_size = 0;
	ssize_t read_result = 1;
	stack_type *execution_stack = NULL;
	unsigned int line_counter = 0;

	if (argument_count != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_file = fopen(argument_values[1], "r");
	bus.file = monty_file;

	if (!monty_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argument_values[1]);
		exit(EXIT_FAILURE);
	}

	while (read_result > 0)
	{
		line_content = NULL;
		read_result = getline(&line_content, &buffer_size, monty_file);
		bus.content = line_content;
		line_counter++;

		if (read_result > 0)
		{
			exec(line_content, &execution_stack, line_counter, monty_file);
		}

		free(line_content);
	}

	clear_stack(execution_stack);
	fclose(monty_file);

	return (0);
}
