#include "adt.h"

stack init_stack(void) {
    stack s;
    
    s = malloc(sizeof(adt));
    s->head = s->tail = NULL;
    s->length = 0;

    return s;
}

void stack_push(stack s, int data) {
    node *n;
    
    n = malloc(sizeof(node));
    n->data = data;
    n->next = s->head;
    s->head = n;
    s->length++;
}

int stack_pop(stack s) {
    node *n;
    int data;

    n = s->head;
    s->head = n->next;
    data = n->data;
    s->length--;
    free(n);

    return data;
}

int stack_peek(stack s) {
    return s->head->data;
}