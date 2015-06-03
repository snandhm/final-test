/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include "stack.h"
#include <assert.h>
#include <stdlib.h>
 
void stack_init(struct stack *st, int capability)
{
    assert(st && capability > 0);
    st->data = (ElemType *)malloc(sizeof(ElemType) * capability);
    assert(st->data);
    st->top = st->data;
    st->capability = capability;
}
 
 
int stack_push(struct stack *st, ElemType elem)
{
    assert(st);
    if (stack_full(st))
        return STACK_OVERFLOW;
    *(st->top++) = elem;
    return STACK_OK;
}
 
int stack_pop(struct stack *st)
{
    assert(st);
    if (stack_empty(st)) 
        return STACK_OVERFLOW;
    st->top--;
    return STACK_OK;
}
 

int stack_size(const struct stack *st)
{
    assert(st);
    return (st->top - st->data);
}
 
int stack_capability(const struct stack *st)
{
    assert(st);
    return st->capability;
}
 
int stack_full(const struct stack *st)
{
    return (stack_size(st) == stack_capability(st));
}
 
int stack_empty(const struct stack *st)
{
    return (stack_size(st) == 0);
}
 

