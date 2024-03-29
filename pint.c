#include "monty.h"
/**
 * _pint - prints the value at the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _pint(stack_type **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
