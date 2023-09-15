#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result;

	printf("Input two integers: ");
	scanf_s("%d %d", &num1, &num2);
	result = num1 & num2;
	printf("%d & %d = %d \n", num1, num2, result);
	result = num1 | num2;
	printf("%d | %d = %d \n", num1, num2, result);
	result = num1 ^ num2;
	printf("%d ^ %d = %d \n", num1, num2, result);

	return 0;
}