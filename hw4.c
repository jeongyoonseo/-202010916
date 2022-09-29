#include <stdio.h>

int main(void)
{
	unsigned int num;
	int i;

	printf("Please enter a number: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("It is not a prime number");
			break;
		}
		else
			continue;
	}
	if (i == num)
		printf("It is a prime number.");
	
	return 0;
}