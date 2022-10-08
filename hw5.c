#include <stdio.h>

void Bi(int n);

int main(void)
{
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);

	Bi(num);

	return 0;
}

void Bi(int n)
{
	if (n == 0)
		return;
	else
	{
		int b = n % 2;

		Bi(n / 2);

		printf("%d", b);
	}
}
