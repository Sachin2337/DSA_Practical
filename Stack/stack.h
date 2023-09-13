#ifndef STACK_H
#define STACK_H
#define SIZE 10
struct stack
{
    st* s = (st *)malloc(sizeof(st));
    createStack(s);