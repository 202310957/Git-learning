# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int reverse(int num)
{
	printf("%d", num);
}

int result(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return result(num / 2), reverse(num % 2);
	}
}

int main(void)
{
	int num = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num == 0)
		printf("%d", num);
	else
		result(num);

	return 0;
}