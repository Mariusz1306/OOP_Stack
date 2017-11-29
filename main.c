#include <stdio.h>
#include "stack.h"

int main(){
    int i;
	struct stack_handle s1;
	init(&s1);
	printf("s1 isEmpty: %d\n", isEmpty(&s1));
	for (i = 1; i < 20; i++)
        	push(&s1,i);
	printf("s1 isEmpty: %d\n", isEmpty(&s1));
    	for (i = 1; i < 25; i++)
        	printf("%d\n",pop(&s1));
	clear(&s1);
	printf("s1 isEmpty: %d\n", isEmpty(&s1));
	destroy(&s1);
	return 0;
}
