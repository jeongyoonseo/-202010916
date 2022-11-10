#include<stdio.h>
#include<math.h>

double Standard_deviation(double* ptr)	//ǥ������
{
	double sum = 0;		//�Ǽ��� ��
	double mean = 0;	//�����
	double deviation_square_sum = 0;	//������ ������ ��

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