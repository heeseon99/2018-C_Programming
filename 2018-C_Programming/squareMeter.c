#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;
	double PYEONG, m;

	printf("���� �Է��ϼ���:");
	scanf("%lf", &PYEONG);

	m = PYEONG * SQMETER_PER_PYEONG;

	printf("%lf������ �Դϴ�.\n", m);

	return 0;
}