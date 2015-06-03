#ifndef _MY_STACK_H
#define _MY_STACK_H


void stack_push(int x);
int stack_pop();

// The capacity of the stack
int stack_capacity();

// Current available size of the stack
int stack_size();


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty();
int stack_is_full();

enum { STACK_OK = 0, STACK_OVERFLOW, STACK_ERROR, };
 
typedef int ElemType;
 
struct stack {
    ElemType *data;
    ElemType *top;
    int capability;
};
 
 
void stack_init(struct stack *st, int capability);
int stack_push(struct stack *st, ElemType elem);
int stack_pop(struct stack *st);
int stack_size(const struct stack *st);
int stack_capability(const struct stack *st);
int stack_full(const struct stack *st);
int stack_empty(const struct stack *st);
#endif //_MY_STACK_H
