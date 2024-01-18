#include "monty.h"
/**
 * _pop - removes the element at the top of stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _pop(stack_type **head, unsigned int counter)
{
	stack_type *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
