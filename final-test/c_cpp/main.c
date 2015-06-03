#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x;	
 stack_init(&st, 5);
        while ( ! stack_full(&st) ) {
		scanf("%d", &x);
		stack_push(&st,x);
	}
	

	while ( !stack_empty(&st) ) {
		x = stack_pop(&st);

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
