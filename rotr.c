#include "monty.h"

/**
 * m_rotr - rotates the stack to the bottom
 * @stack: pointer to the stack
 * @number: unused attribute
 */

void m_rotr(stack_t **stack, __attribute__((unused)) unsigned int number)
{
	stack_t *last;

	last = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = *stack;
	last->prev->next = NULL;
	last->prev = NULL;
	(*stack)->prev = last;
	(*stack) = last;
}
