# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num[5];
	int odd[5];
	int even[5];
	
	printf("Please input five integers: ");

	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
	{
		scanf("%d", &num[i]);
		odd[i] = 0;
		even[i] = 0;
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 != 0)
		{
			odd[i] = num[i];
		}
		else
		{
			even[i] = num[i];
		}
	}

	printf("Odd numbers: ");

	for (int i = 0; i < 5; i++)
	{
		if (odd[i] != 0)
		{
			printf("%d ", odd[i]);
		}
	}

	printf("\n");

	printf("Even numbers: ");

	for (int i = 0; i < 5; i++)
	{
		if (even[i] != 0)
		{
			printf("%d ", even[i]);
		}
	}

	return 0;
}