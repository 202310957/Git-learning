# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	double kilometer = 0;
	double mile = 0;

	printf("Please enter kiloneters: ");
	scanf("%lf", &kilometer);

	mile = kilometer / 1.609;

	printf("%.1f km is equal to %.1f miles.", kilometer, mile);
	return 0;

}