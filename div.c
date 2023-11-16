#include "monty.h"

/**
 * m_div - divides the second top element of the stack by the top element
 * @stack: pointer to the stack
 * @number: number of the opcode
 */

void m_div(stack_t **stack, unsigned int number)
{
	stack_t *h;
	int quotient, len = 0;

	h = *stack;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d:can't div,stack too short\n", number);
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
	quotient = h->next->n / h->n;
	h->next->n = quotient;
	*stack = h->next;
	free(h);
}
