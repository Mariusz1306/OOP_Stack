#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

#define initSTACKSIZE 5
int stacksize = initSTACKSIZE;

void init(struct stack_handle* s){
	s->top=0;
	s->dane  = malloc(stacksize*sizeof(int));
}

void destroy(struct stack_handle* s){
    free(s->dane);
}

void clear(struct stack_handle* s){
	s->top=0;
}

void push(struct stack_handle* s,int a){
        //assert(s->top<stacksize);
	if (s->top>=stacksize){
            stacksize *= 2;
            s->dane = realloc(s->dane, stacksize * sizeof(int));
	}
	s->dane[s->top++]=a;
}

int pop(struct stack_handle* s){
	if (s->top == 0){
		free(s->dane);
		assert(s->top>0);
		/* Zamiast asserta: 
		fprintf(stderr, "Too many pops\n");
		abort();
		*/
	}
	return s->dane[--s->top];
}

bool isEmpty(struct stack_handle* s){
	return s->top==0 ? true : false;
}

