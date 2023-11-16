#include "monty.h"

/**
 * m_pop - removes the top element of the stack
 * @stack: pointer to the stack
 * @number:  number of the opcode
 */

void m_pop(stack_t **stack, unsigned int number)
{
	stack_t *h;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	*stack = h->next;
	free(h);
}
