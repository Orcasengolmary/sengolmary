/* use of various 

 * arithmetic operators

 * sengolmary, august 2014*/

#include <stdio.h>

int main(void)
{

	int a = 200;
	int b = 25;
	int c = 4;
	int d = 2;

	/* addition */
	printf("a + b = %d", a + b);

	/* subtraction */
	printf("a - b = %d", a - b);

	/* multiplication */
	printf("a * b = %d", a * b);
	
	/* division */
	printf("a / b = %d", a / b);

	/* precedence */
	printf("a + b * c / d = %d", a + b * c / d);

	return 0;

}