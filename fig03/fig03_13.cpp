/* Fig. 3.13: fig03_13.c 
	Preincrementing and postincrementing */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function main begins program excution */
int main(void) {

	int c; /* define variable */

	/* demonstrate postincrement */
	c = 5; /* assign 5 to c */
	printf("%d\n", c); /* print 5 */
	printf("%d\n", c++); /* print 5 then postincrement */
	printf("%d\n\n", c); /* print 6 */
	 
	/* demonstrate preincrement */
	c = 5; /* assign 5 to c */
	printf("%d\n", c); /* print 5 */
	printf("%d\n", ++c); /* preincrement then print 6 */
	printf("%d\n", c); /* print 6 */

	return 0; /* indicate program ended successfully */
} /* end function main */