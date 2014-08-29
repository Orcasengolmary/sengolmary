/* using modulus operator
 * sengolmary, august 2014 */

int main(void)
{
	int a = 100;
	int b = 23;
	int c = 3;

	printf("a mod b = %i\n", a % b);
	printf("b mod c = %i\n", b % c);
	printf("a mod b + c = %i\n", a % b + c);

	return 0;
}