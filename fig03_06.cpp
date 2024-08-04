/* Fig. 3.6: fig03_06.c 
	Class average program with counter-controlled repetition */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program excution */
int main(void) {
		int counter; /* number of grade to be entered next*/
		int grade; /* grade value */
		int total; /* sum of grades input by user */
		int average; /* average of grades */

		/* initialization phase */
		total = 0; /* initialize total */
		counter = 1; /* initialize loop counter */

		/* processing phase */
		while (counter <= 10) { /* lopp 10 times */
			printf("Enter grade : "); /* prompt for input */
			scanf("%d", &grade); /* read grade from user */
			total = total + grade; /* add grade to total */
			counter = counter + 1; /* increment counter */
		} /* end while */

		/* termination phase */
		average = total / 10; /* integer division */

		printf("Class average is %d\n", average); /* display result */
		return 0; /* indicate program ended successfully */
} /* end function main */