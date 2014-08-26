/ * time calculation *
sengolmary, august 2014 */
#include <stdio.h>

void main()

{
	int hr;
	int a1;
	int min;
	int sec;
	int a;
	printf ("enter the minute");
	scanf ("%d",&a);
	a1 = a / 60;
	hr = min1 / 60;
	min = a1 % 60;
	sec=a%60;
	printf ("%d %d %d",hr,min,sec);
	getch ();
}
