#include "stack.h"
#include<stdlib.h>


//create stack
void createStack(st *s){
    s->top = -1;
}

int isFull(st* s){
    if(s->top==SIZE-1){
        return 1;
    }
    else 
    return 0;
}

int isEmpty(st *s)
{
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

//push
void push(st *s,int data){
    if(isFull(s)){
        printf("stack overflow");
    }
    else{
            s->top++;
            s->items[s->top]=data;
    }
}

int pop(st *s){
    if(isEmpty(s)){
        printf("stack underflow");
    }
    else{
            int data = s->items[s->top];
            s->top--;
            return data;
        
    }
}

void printStack(st *s){
    int  top = s->top;
    for(int i=top;i>=0;i--){
        printf(s->items[i]);
    }
}