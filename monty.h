#ifndef MONTY_H
#define MONTY_H
#define DELIM " \n\t"

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>

extern FILE *fileopen;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

FILE *lines(FILE *fileopen);
int main(int argc, char *argv[]);
void push(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void pall(stack_t **stack, unsigned int lines);
void (*get_func(char *opcode))(stack_t **stack, unsigned int line_number);
int is_digit(char *string);
stack_t *add_new_node(stack_t **head, int data_node);
FILE *open_file(char *monty_file, char *argv[]);
#endif
