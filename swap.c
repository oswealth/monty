#include "monty.h"

/**
 * m_swap - swaps the top two elements of the stack
 * @stack: pointer to the stack
 * @number:  number of the opcode
 */

void m_swap(stack_t **stack, unsigned int number)
{
	stack_t *h;
	int len = 0, tmp;

	h = *stack;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
