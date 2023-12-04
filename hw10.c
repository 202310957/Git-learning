# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

typedef struct city
{
	char city[20];
	char country[20];
	int population;
} City;

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	int i;
	City city1;
	City city2;
	City city3;
	char str[10];
	int len;

	printf("Input three cities: \n");

	strncpy(str, "city1", sizeof(str));
	
	printf("Name> ");
	fgets(city1.city, sizeof(city1.city), stdin);
	len = strlen(city1.city);
	city1.city[len - 1] = 0;

	printf("Country> ");
	fgets(city1.country, sizeof(city1.country), stdin);
	len = strlen(city1.country);
	city1.country[len - 1] = 0;

	printf("Population> ");
	scanf("%d", &city1.population);

	ClearLineFromReadBuffer();

	///////////////////////////////////////////////////////

	printf("Name> ");
	fgets(city2.city, sizeof(city2.city), stdin);
	len = strlen(city2.city);
	city2.city[len - 1] = 0;

	printf("Country> ");
	fgets(city2.country, sizeof(city2.country), stdin);
	len = strlen(city2.country);
	city2.country[len - 1] = 0;

	printf("Population> ");
	scanf("%d", &city2.population);

	ClearLineFromReadBuffer();

	////////////////////////////////////////////////////////

	printf("Name> ");
	fgets(city3.city, sizeof(city3.city), stdin);
	len = strlen(city3.city);
	city3.city[len - 1] = 0;

	printf("Country> ");
	fgets(city3.country, sizeof(city3.country), stdin);
	len = strlen(city3.country);
	city3.country[len - 1] = 0;

	printf("Population> ");
	scanf("%d", &city3.population);
	
	printf("\n");

	////////////////////////////////////////////////////////

	printf("Printing the three cities: \n");

	printf("1. %s in %s with a population of %d people \n", city1.city, city1.country, city1.population);
	printf("2. %s in %s with a population of %d people \n", city2.city, city2.country, city2.population);
	printf("3. %s in %s with a population of %d people \n", city3.city, city3.country, city3.population);
}