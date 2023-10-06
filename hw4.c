#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i < num; i++)
	{
		if ((i != 1) && (num % i == 0))
		{
			break;
		}

		if ((i == (num - 1)) && (num % i != 0))
		{
			printf("It is a prime number\n");
		}
	}

	return 0;
}