#include "monty.h"

/**
 * m_sub - subtracts the top element of the stack from the second top element
 * @stack: pointer to the stack
 * @number: number of the opcode
 */

void m_sub(stack_t **stack, unsigned int number)
{
	stack_t *tmp;
	int diff, nodes;

	tmp = *stack;
	for (nodes = 0; tmp != NULL; nodes++)
		tmp = tmp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	diff = tmp->next->n - tmp->n;
	tmp->next->n = diff;
	*stack = tmp->next;
	free(tmp);
}
