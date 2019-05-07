#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "adt.h"

/* Initialize que data structure (FIFO) */
queue init_queue(void);

/* Add integer to top of que */
void enqueue(queue, int data);

/* Remove and return bottom integer in que */
int dequeue(queue);

/* Return the integer at the front of the que (first added) */
int queue_head(queue);

/* Return the integer at the end of the que (last added) */
int queue_tail(queue);

/* Free all memory allocated to the data structure */
void free_set(set);

/* Free all memory allocated to the data structure */
void free_queue(queue);

#endif