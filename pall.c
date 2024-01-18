#include "monty.h"
/**
 * _pall - prints all the values on the stack
 * @head: stack head
 * @counter: no used
 * Return: void
*/
void _pall(stack_type **head, unsigned int counter)
{
	stack_type *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
