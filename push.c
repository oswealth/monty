#include "monty.h"

/**
 * m_push - pushes an element to the stack
 * @head: pointer to the stack
 * @number: line number of the opcode
 */

void m_push(stack_t **head, unsigned int number)
{
	int n, i = 0, flag = 0;

	if (data.value)
	{
		if (data.value[0] == '-')
			i++;
		for (; data.value[i] != '\0'; i++)
		{
			if (data.value[i] > 57 || data.value[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", number);
			fclose(data.stream);
			free(data.line);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", number);
		fclose(data.stream);
		free(data.line);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(data.value);
	if (data.mode == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
