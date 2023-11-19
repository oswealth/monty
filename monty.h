#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct data_s - variables -value, stream, line, mode
 * @value: value
 * @stream: pointer to monty file
 * @line: line content
 * @mode: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct data_s
{
	char *value;
	FILE *stream;
	char *line;
	int mode;
}  data_t;
extern data_t data;

void add_node(stack_t **stack, int n);
void add_queue(stack_t **stack, int n);
int execute(char *content, stack_t **stack, unsigned int number, FILE *stream);
void m_push(stack_t **head, unsigned int number);
void m_pall(stack_t **stack, unsigned int number);
void m_pint(stack_t **stack, unsigned int number);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
char  *clean_line(char *line);
void m_pop(stack_t **stack, unsigned int number);
void m_swap(stack_t **stack, unsigned int number);
void m_add(stack_t **stack, unsigned int number);
void m_nop(stack_t **stack, unsigned int number);
void m_sub(stack_t **stack, unsigned int number);
void m_div(stack_t **stack, unsigned int number);
void m_mul(stack_t **stack, unsigned int number);
void m_mod(stack_t **stack, unsigned int number);
void m_pchar(stack_t **stack, unsigned int number);
void m_pstr(stack_t **stack, __attribute__((unused)) unsigned int number);
void m_rotl(stack_t **stack, __attribute__((unused)) unsigned int number);
void m_rotr(stack_t **stack, __attribute__((unused)) unsigned int number);
void m_stack(stack_t **stack, unsigned int number);
void m_queue(stack_t **stack, unsigned int number);
void free_stack(stack_t *stack);
int main(int argc, char **argv);


#endif
