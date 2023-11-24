# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	char input[100];
	int len;
	int i;

	printf("Input> ");
	fgets(input, sizeof(input), stdin);
	len = strlen(input);

	printf("Output> ");

	for (i = 0; i < len; i++)
	{
		if (input[i] - 'a' >= 0 && input[i] - 'a' <= 'z' - 'a')
			printf("%c", (input[i] - 'a' + 'A'));
		else if (input[i] - 'A' >= 0 && input[i] - 'A' <= 'Z' - 'A')
			printf("%c", (input[i] - 'A' + 'a'));
		else
			printf("%c", input[i]);
	}

	return 0;
}