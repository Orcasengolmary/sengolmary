/* fahrenheit to celsius conversion
 * sengolmary, august 2014 */

#include <stdio.h>

int main(void)
{

	int f = 27,c;
	
	/* conversion logic */
	c = (f - 32) / 1.8;
	printf("c value is %i", c);

	return 0;
}