#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;
	float z;
	float sum;
	float avg;

	printf("실수를 입력하시오 : ");
	scanf("%f", &x);

	printf("실수를 입력하시오 : ");
	scanf("%f", &y);

	printf("실수를 입력하시오 : ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3.0;
	printf("합계는 %f이고", sum);
	printf(" 평균값은 %f입니다.", avg);

	return 0;
}