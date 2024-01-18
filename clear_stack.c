#include "monty.h"
/**
* clear_stack - frees a doubly linked list
* @head: head of the stack
*/
void clear_stack(stack_type *head)
{
	stack_type *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
