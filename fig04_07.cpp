/* Fig. 4.7: fig04_07.c 
	Counting letter grades */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program excution */
int main(void) {

	int grade; /* one grade */
	int aCount; /* number of As */
	int bCount; /* number of Bs */
	int cCount; /* number of Cs */
	int dCount; /* number of Ds */
	int fCount; /* number of Fs */

	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input./n");

	/* loop until user types end-of-file key sequence */
	while ((grade = getchar()) != EOF) {

		/* determine which grade was input */
		switch (grade) { /* switch nested in while */
			case 'A': /* grade was upper case A */
			case 'a': /* or lower case a */
				++aCount; /* increment aCount */
				break; /* necessary to exit switch */

			case 'B': /* grade was upper case B */
			case 'b': /* or lower case b */
				++bCount; /* increment bCount */
				break; /* exit switch */

			case 'C': /* grade was upper case C */
			case 'c': /* or lower case c */
				++cCount; /* increment cCount */
				break; /* exit switch */

			case 'D': /* grade was upper case D */
			case 'd': /* or lower case d */
				++dCount; /* increment dCount */
				break; /* exit switch */

			case 'F': /* grade was upper case F */
			case 'f': /* or lower case f */
				++fCount; /* increment fCount */
				break; /* exit switch */

			case '\n': /* ignore newlines */
			case '\t': /* tabs, */
			case ' ': /* and spaces in input */
				break; /* exit switch */

			default: /* catch all other characters */
				printf("Incorrect letter grade entered.");
				printf("Enter a new grade.\n");
				break; /* optional; will exit switch anyway */
		} /* end switch */
	} /* end while */

	/* output summary of results */
	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount); /* display number of A grades */
	printf("B: %d\n", bCount); /* display number of B grades */
	printf("C: %d\n", cCount); /* display number of C grades */
	printf("D: %d\n", dCount); /* display number of D grades */
	printf("F: %d\n", fCount); /* display number of F grades */
	return 0; /* indicate program ended successfully */
} /* end function main */