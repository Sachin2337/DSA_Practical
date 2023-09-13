#ifndef STACK_H
#define STACK_H
#define SIZE 10
struct stack
{
    int top;
    int items[SIZE];
};

typedef struct stack st;
void createStack(st *s);