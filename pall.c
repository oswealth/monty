#include "monty.h"

/**
 * m_pall - prints all the values on the stack
 * @stack: pointer to the stack
 * @number: line number of the opcode
 */

void m_pall(stack_t **stack, unsigned int number)
{
	stack_t *h;
	(void) number;

	h = *stack;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		free(h);
		h = h->next;
	}
}
