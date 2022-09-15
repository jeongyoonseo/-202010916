#include <stdio.h>

int main(void)
{
	double km;

	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	
	double mile = km / 1.609;

	printf("%.1f km is equal to %.1f miles.\n", km, mile);

	return 0;
}