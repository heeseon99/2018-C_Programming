#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double c;
	double f;

	printf("ȭ������ �Է��Ͻÿ�:");
	scanf("%lf", &f);

	c = (5.0 / 9.0) * (f - 32.0);

	printf("�������� %f���Դϴ�.\n", c);

	return 0;
}