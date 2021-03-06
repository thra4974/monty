#ifndef _MONTY_H
#define _MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/*******************************************************/

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

/*******************************************************/

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

/*******************************************************/

/**
 * struct global_data - extern variables
 * that hold all necessary values to be
 * used across functions that may need it
 * @data: pointer storing data from main
 * @buf: pointer storing getline buf from main
 * @fp: pointer to file
 */

typedef struct global_data
{
	char *data;
	char *buf;
	FILE *fp;
	stack_t *stack;
	char *funcstr;
} global_data;

extern global_data univ;

/*******************************************************/

/* Mandatory Task Function Declarations / Prototypes */
void pall_s(stack_t **stack, unsigned int line_number);
void pop_s(stack_t **stack, unsigned int line_number);
void nop_s(stack_t **stack, unsigned int line_number);
void swap_s(stack_t **stack, unsigned int line_number);
void pint_s(stack_t **stack, unsigned int line_number);
void push_s(stack_t **stack, unsigned int line_number);

/* Advanced Task Function Declarations / Prototypes */
void pchar_s(stack_t **stack, unsigned int line_number);
void pstr_s(stack_t **stack, unsigned int line_number);
void calc_s(stack_t **stack, unsigned int line_number);

/* Helper Functions */
void free_stack(stack_t *head);
void rip(char error);

/*******************************************************/

#endif
