#include <stdio.h>
#include "stack.h"

int main(){
    int i;
	struct stack_handle s1;
	struct stack_handle s2;
	init(&s1);
	printf("s1 isEmpty: %d\n", isEmpty(&s1));
	init(&s2);
	for (i = 1; i <= 15; i++)
        	push(&s1,i);
	printf("s1 isEmpty: %d\n", isEmpty(&s1));
    	for (i = 1; i <= 15; i++)
        	printf("%d\n",pop(&s1));
    	for (i = 1; i <= 30; i++)
        	push(&s2,i);
    	for (i = 1; i <= 30; i++)
        	printf("%d\n",pop(&s2));
	clear(&s1);
	printf("s1 isEmpty: %d\n", isEmpty(&s1));
	destroy(&s1);
	destroy(&s2);
	return 0;
}
