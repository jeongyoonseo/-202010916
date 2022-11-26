#include <stdio.h>
#include <string.h>

typedef struct city
{
	char name[50];
	char country[50];
	int population;
}City;

int main(void)
{
	City arr[3];

	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf("%[^\n]s", arr[i].name);		getchar();
		printf("Country> ");
		scanf("%[^\n]s", arr[i].country);		getchar();
		printf("Population > ");
		scanf("%d", &arr[i].population);		getchar();
	}
	printf("\nPrinting the three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}
}