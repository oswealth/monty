#include "monty.h"

/**
 * free_stack - frees the doubly linked list
 * @stack: pointer to the stack
 */

void free_stack(stack_t *stack)
{
	stack_t *current_node;

	current_node = stack;
	while (stack)
	{
		current_node = stack->next;
		stack = current_node;
		free(current_node);
	}
}
