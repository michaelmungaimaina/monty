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
 * struct stack_struct - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_struct
{
	int n;
	struct stack_struct *prev;
	struct stack_struct *next;
} stack_type;
/**
 * struct bus_struct - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_struct
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_type;
extern bus_type bus;
/**
 * struct command_struct - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct command_struct
{
	char *opcode;
	void (*f)(stack_type **stack, unsigned int line_number);
} command_type;

void _push(stack_type **head, unsigned int number);
void _pall(stack_type **head, unsigned int number);
void addelement(stack_type **head, int n);
void addqueue(stack_type **head, int n);
void _pint(stack_type **head, unsigned int number);
void _pop(stack_type **head, unsigned int counter);
void _swap(stack_type **head, unsigned int counter);
void _add(stack_type **head, unsigned int counter);
void _nop(stack_type **head, unsigned int counter);
void _swap(stack_type **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *del_line(char *content);
int exec(char *content, stack_type **head, unsigned int counter, FILE *file);
void clear_stack(stack_type *head);
