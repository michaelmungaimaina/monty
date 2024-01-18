#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _swap(stack_type **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		clear_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	aux = hd->n;
	hd->n = hd->next->n;
	hd->next->n = aux;
}
