#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile;
	double meter;

	printf("������ �Է��Ͻÿ�:");
	scanf("%f", &mile);

	meter = 1609.0 * mile;

	printf("%f������ %lf�����Դϴ�.\n", mile, meter);

	return 0;


}