#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _add(stack_type **head, unsigned int counter)
{
	stack_type *hd;
	int len = 0, aux;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	aux = hd->n + hd->next->n;
	hd->next->n = aux;
	*head = hd->next;
	free(hd);
}
