#include <stdio.h>
#include "stack.h"

#define initSTACKSIZE 5
int stacksize = initSTACKSIZE;

int main()
{

	struct stack_handle s1;
	init(&s1);
	push(&s1,1);
	push(&s1,2);
	push(&s1,3);
	push(&s1,4);
	push(&s1,5);
	push(&s1,6);
	push(&s1,7);
	push(&s1,8);
	push(&s1,9);
	push(&s1,10);
	push(&s1,11);
	push(&s1,12);
	push(&s1,13);
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	printf("%d\n",pop(&s1));
	finalize(&s1);
	return 0;
}
