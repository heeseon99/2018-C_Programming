#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double d;
	double V;

	printf("������ ����, ����, ���̸� �ѹ��� �Է�:");
	scanf("%lf %lf %lf", &w, &h, &d);

	V = w * h * d;

	printf("������ ���Ǵ� %lf�Դϴ�.\n", V);

	return 0;
}