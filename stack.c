#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

extern int stacksize;

void init(struct stack_handle* s)
{
	s->top=0;
	s->dane  = calloc(stacksize, sizeof(int));
}

void finalize(struct stack_handle* s)
{
    free(s->dane);
    free(s);
}

void clear(struct stack_handle* s)
{
	s->top=0;
}

void push(struct stack_handle* s,int a)
{
        //assert(s->top<stacksize);
        if (s->top<stacksize){
            stacksize = stacksize*2;
            s->dane = realloc(s->dane, stacksize * sizeof(int));
        }
	s->dane[s->top++]=a;
}

int pop(struct stack_handle* s)
{
	assert(s->top>0);
	return s->dane[--s->top];
}

