#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
int main()
{
    st* s = (st *)malloc(sizeof(st));
    createStack(s);