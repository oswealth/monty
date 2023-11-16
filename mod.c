#include "monty.h"

/**
 * m_mod - computes the rest of the division of the second top 
 * element by the top element
 * @stack: pointer to the stack
 * @number: number of the opcode
 */

void m_mod(stack_t **stack, unsigned int number)
{
	stack_t *h;
	int remainder, len = 0;

	h = *stack;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	remainder = h->next->n % h->n;
	h->next->n = remainder;
	*stack = h->next;
	free(h);
}
