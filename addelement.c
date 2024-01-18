#include "monty.h"
/**
 * addelement - add element to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addelement(stack_type **head, int n)
{

	stack_type *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_type));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
