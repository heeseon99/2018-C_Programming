#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%f", &x);

	y = (3 * x * x) + (7 * x) + 11;

	printf("���׽��� ���� %f\n", y);

	return 0;
}