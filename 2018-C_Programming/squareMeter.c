#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;
	double PYEONG, m;

	printf("평을 입력하세요:");
	scanf("%lf", &PYEONG);

	m = PYEONG * SQMETER_PER_PYEONG;

	printf("%lf평방미터 입니다.\n", m);

	return 0;
}