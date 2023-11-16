#include "monty.h"

/**
 * m_pchar - prints the char at the top of the stack
 * @stack: pointer to the stack
 * @number:  number of the opcode
 */
void m_pchar(stack_t **stack, unsigned int number)
{
	stack_t *h;

	h = *stack;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d:can't pchar,value out of range\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
