#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float base;
	float height;
	float area;

	printf("�ﰢ���� �غ�:");
	scanf("%f", &base);

	printf("�ﰢ���� ����:");
	scanf("%f", &height);

	area = 0.5 * height * base;

	printf("�ﰢ���� ���� : %f\n", area);

	return 0;
}