#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("실수를 입력하시오:");
	scanf("%f", &x);

	y = (3 * x * x) + (7 * x) + 11;

	printf("다항식의 값은 %f\n", y);

	return 0;
}