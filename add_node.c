#include "monty.h"
/**
 * addnode - add node to the head stack
 * @stack: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_node(stack_t **stack, int n)
{

	stack_t *new, *aux;

	aux = *stack;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new;
	new->n = n;
	new->next = *stack;
	new->prev = NULL;
	*stack = new;
}
