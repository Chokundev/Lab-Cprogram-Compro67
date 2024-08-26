/* fig. 5.15 : fig05_15 .c
	Recursive fibonacci function */
#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h>

long fibonacci(long n); /* function prototype */

/* function main begins program execution */
int main(void)
{
	long result; /* fibonacci value */
	long number; /* number input by user */

	/* obtain integer from user */
	printf("Enter an integer: ");
	scanf("%ld", &number);

	/* calculate fibonacci value for number input by user */
	result = fibonacci(number);

	/* display result */
	printf("fibonacci ( %ld )= %ld\n", number, result);
	return 0; /* indicates successsful termination */
}	/* end main */

/* Recursive definition of function fibonacci */
long fibonacci(long n)
{
	/* base case */
	if (n == 0 || n == 1) {
		return n;
	} /* end if */
	else { /* recursive step */
		return fibonacci(n - 1) + fibonacci(n - 2);
	} /* end else */
}	/* end function fibonacci */
