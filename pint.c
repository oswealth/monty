#include "monty.h"

/**
 * m_pint - prints the value at the top of the stack
 * @stack: pointer to the stack
 * @number: number of the opcode
 */

void m_pint(stack_t **stack, unsigned int number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", number);
		exit(EXIT_FAILURE);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
