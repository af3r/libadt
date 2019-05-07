#ifndef _STACK_H_
#define _STACK_H_

#include "adt.h"

/* Initialize stack data structure (LIFO) */
stack init_stack(void);

/* Add integer to the top of stack */
void stack_push(stack, int data);

/* Remove and return the last integer added */
int stack_pop(stack);

/* Return the head of the stack (last added) */
int stack_peek(stack);

/* Return 1 if the stack is empty and 0 otherwise */
int stack_empty(stack);

/* Free all memory allocated to the data structure */
void free_stack(stack);

#endif
