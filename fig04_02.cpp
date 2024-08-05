/* Fig. 4.2: fig04_02.c 
	Counter-controlled repetition with the for statement */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program excution */
int main(void) {

	int counter = 1; /* define counter */

	/* initialization, repetition condition , and increment
		are all include in the for statement header. */
	for (counter = 1; counter <= 10; counter++) {
		printf("%d\n", counter);
	} /* end for */

	return 0; /* indicate program ended successfully */
} /* end function main */