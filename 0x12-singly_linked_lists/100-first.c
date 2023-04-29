#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a function that prints sentence before
 * main function is exucated
 */
void first(void)
{
	printf("you're a beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}

