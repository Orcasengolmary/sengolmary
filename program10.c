/* conversions between integers and floats
 * senglmary, august 2014*/

#include <stdio.h>

int main(void)
{
	int i1,i2 = 100;
	float f1,f2 = 234.15;

	/* float to integer */
	i1 = f2;
	printf("float %f assigned to integer %i", f2, i1);

	/* integer to float */
	f1 = i2;
	printf("integer %i assigned to float %f", i2, f1);

	/* integer by integer */
	f1 = i2 / 2;
	printf("integer %i divided by 2 produces %f", i2, f1);

	/* integer by float*/
	f1 = i2 / 2.0;
	printf("integer %i divided by 2.0 produces %f", i2, f1);

	/* type cast */
	f1 = (float) i2 / 2;
	printf("(float) %i divided by integer produces %f", i2, f1);

	return 0;
}