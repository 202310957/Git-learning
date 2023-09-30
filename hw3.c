#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int line = 1; line <= 5; line++)
	{
		for (int blank = (5 - line); blank >= 1; blank--)
		{
			printf(" ");
		}

		for (int star = (2*line-1); star >= 1; star--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}