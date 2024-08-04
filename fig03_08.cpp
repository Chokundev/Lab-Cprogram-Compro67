/* Fig. 3.6: fig03_06.c 
	Class average program with sentinel controlled repetition */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program excution */
int main(void) {
		int counter; /* number of grade entered */
		int grade; /* grade value */
		int total; /* sum of grades */

		float average; /* number with decimal point for average */

		/* initialization phase */
		total = 0; /* initialize total */
		counter = 1; /* initialize loop counter */

		/* processing phase */
		/* get first grade from user */
		printf("Enter grade, -1 to end: "); /* prompt for input */
		scanf("%d", &grade); /* read grade from user */

		/* loop while sentinel value not yet read from user */
		while (grade != -1) {
			total = total + grade; /* add grade to total */
			counter = counter + 1; /* increment counter */

			/* get next grade from user */
			printf("Enter grade, -1 to end: "); /* prompt for input */
			scanf("%d", &grade); /* read next grade */
		} /* end while */

		/* termination phase */
		/* if user entered at least one grade */
		if (counter != 0) {

			/* calculate average for all grades entered */
			average = (float)total / counter; /* avoid truncation */

			/* display average with two digits of precision */
			printf("Class average is %.2f\n", average); 
		} /* end if */
		else {
			printf("No grades were entered\n");
		} /* end else */

		return 0; /* indicate program ended successfully */
} /* end function main */