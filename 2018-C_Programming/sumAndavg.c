#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;
	float z;
	float sum;
	float avg;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &x);

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &y);

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &z);

	sum = x + y + z;
	avg = sum / 3.0;
	printf("�հ�� %f�̰�", sum);
	printf(" ��հ��� %f�Դϴ�.", avg);

	return 0;
}