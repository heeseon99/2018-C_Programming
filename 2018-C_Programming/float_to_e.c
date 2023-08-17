#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double data;

	printf("실수를 입력하시오:");
	scanf("%lf", &data);

	printf("실수 형식으로는 %f입니다.\n", data);

	printf("지수 형식으로는 %e입니다.\n", data);

	return 0;
}