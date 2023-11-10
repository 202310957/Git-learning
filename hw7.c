# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[] = { 7, 8, 9, 10, 11, 12 };

	int *pnum1 = arr1;
	int* pnum2 = arr2;

	int temp = 0;
	int idx = 0;

	printf("arr1: ");
	for (; idx < 6; idx++)
		printf("%d ", arr1[idx]);
	printf("\n");

	printf("arr2: ");
	for (idx=0; idx < 6; idx++)
		printf("%d ", arr2[idx]);
	printf("\n\n");

	printf("after swap \n");

	for (idx = 0; idx < 6; idx++)
	{
		temp = *pnum1;
		*pnum1 = *pnum2;
		*pnum2 = temp;

		pnum1++;
		pnum2++;
	}
	
	printf("arr1: ");
	for (idx = 0; idx < 6; idx++)
		printf("%d ", arr1[idx]);
	printf("\n");

	printf("arr2: ");
	for (idx = 0; idx < 6; idx++)
		printf("%d ", arr2[idx]);

	return 0;
}