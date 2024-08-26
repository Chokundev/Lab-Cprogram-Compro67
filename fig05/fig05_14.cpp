/* Fig. 5.14:fig05_14.c
	Recursive factorial function */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long factorial(long number); /* function prototype */

/* function main begins program excution */
int main(void) {

	int i; /* counter */

	/* lopp 11 times; during each iteration, calculate
		factorail(i) and display result */
	for (i = 0; i <= 10; i++) {
		printf("%2d! = %ld\n", i, factorial(i));
	} /* end for */

	return 0; /* indicates successful termination */
} /* end main */

/* recursive definition of function factorail */
long factorial (long number) {

	/* base case */
	if (number <= 1) {
		return 1;
	} /* end if */
	else { /* recursive step */
		return(number * factorial(number - 1));
	} /* end else */
} /* end function factorail */