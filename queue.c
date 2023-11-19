#include "monty.h"

/**
 * m_queue - sets the format of the data to a queue (FIFO)
 * @stack: pointer to the stack
 * @number: number of the opcode
 */

void m_queue(stack_t **stack, unsigned int number)
{
	(void) stack;
	(void) number;
	data.mode = 0;
}

/**
 * add_queue - adds a new node at the end of a stack
 * @stack: pointer to pointer to the head of the stack
 * @n: integer value to store in the new node
 *
 * Return: void
 */
void add_queue(stack_t **stack, int n)
{
	stack_t *new_node, *aux;

	aux = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
		free(aux);
	}
}
