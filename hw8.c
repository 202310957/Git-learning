# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

void getStd(double* ptr)
{
	double sum = 0;
	int i = 0;
	double mu = 0;

	for (; i < 5; i++)
	{
		sum += ptr[i];
	}

	mu = sum / 5;

	sum = 0;

	for (i = 0; i < 5; i++)
	{
		sum += pow(ptr[i] - mu, 2);
	}
	
	printf("Standard Deviation = %f \n", sqrt(sum / 5));
}

int main(void)
{
	double arr[5];
	int i = 0;

	printf("Enter 5 real numbers: ");
	for (; i < 5; i++)
	{
		scanf("%lf", &arr[i]);
	}
	getStd(&arr[0]);

	return 0;
}