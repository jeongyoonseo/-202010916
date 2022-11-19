#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	int len;
	int diff = 'a' - 'A';

	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
	}

	printf("Output> %s", str);

	return 0;
}