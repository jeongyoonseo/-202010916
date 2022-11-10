#include<stdio.h>
#include<math.h>

double Standard_deviation(double* ptr)	//표준편차
{
	double sum = 0;		//실수의 합
	double mean = 0;	//모평균
	double deviation_square_sum = 0;	//편차의 제곱의 합

	for (int i = 0; i < 5; i++)
		sum += ptr[i];

	mean = sum / 5;

	for (int j = 0; j < 5; j++)
		deviation_square_sum += pow((ptr[j] - mean), 2);

	return sqrt(deviation_square_sum / 5);
}

int main(void)
{
	double arr[5];

	printf("Enter 5 real numbers: ");
	
	for (int i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);

	printf("Standard Deviation = %.3f", Standard_deviation(arr));

	return 0;
}