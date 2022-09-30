// test3.c -- is a simple program
// with two functions

#include <stdio.h>

void foo(void);

int main () {

	printf("\nCall foo()!\n");
	foo();

	printf("\n");
	return 0;
}

void foo(void) {

	printf("Yes! I am foo()!\n");
}
