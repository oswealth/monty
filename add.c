#include "monty.h"

/**
 * m_add - adds the top two elements of the stack
 * @stack: pointer to the stack
 * @number:  number of the opcode
 */

void m_add(stack_t **stack, unsigned int number)
{
	stack_t *h;
	int sum, len = 0;

	h = *stack;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	sum = h->n + h->next->n;
	h->next->n = sum;
	*stack = h->next;
	free(h);
}
