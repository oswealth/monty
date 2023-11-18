#include "monty.h"

/**
 * m_pstr - prints the string starting at the top of the stack
 * @stack: pointer to the stack
 * @number: line number of the opcode
 */

void m_pstr(stack_t **stack, unsigned int number)
{
	stack_t *h;
	(void) number;

	h = *stack;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
