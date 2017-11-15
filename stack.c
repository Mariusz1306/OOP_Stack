#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

#define initSTACKSIZE 5
int init_stacksize = initSTACKSIZE;
int number_of_stacks = 0;
int *ptr_stacksizes;

void init(struct stack_handle* s){
    number_of_stacks++;
    s->stack_number = number_of_stacks;
    if (number_of_stacks == 1)
        ptr_stacksizes = malloc(number_of_stacks * sizeof(int));
    else
        ptr_stacksizes = realloc(ptr_stacksizes, number_of_stacks * sizeof(int));
    *(ptr_stacksizes+s->stack_number-1) = init_stacksize;
	s->top=0;
	s->dane  = calloc(init_stacksize, sizeof(int));
}

void finalize(struct stack_handle* s){
    --number_of_stacks;
	ptr_stacksizes = realloc(ptr_stacksizes, number_of_stacks * sizeof(int));
    free(s->dane);
    free(s);
}

void clear(struct stack_handle* s){
	s->top=0;
}

void push(struct stack_handle* s,int a){
        //assert(s->top<stacksize);
    int temp_stacksize = *(ptr_stacksizes+s->stack_number-1);
        if (s->top>=temp_stacksize){
            temp_stacksize = temp_stacksize * 2;
            s->dane = realloc(s->dane, temp_stacksize * sizeof(int));
            *(ptr_stacksizes+s->stack_number-1) = temp_stacksize;
        }
	s->dane[s->top++]=a;
}

int pop(struct stack_handle* s){
	assert(s->top>0);
	return s->dane[--s->top];
}

