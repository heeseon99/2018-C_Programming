#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y, z, min;

	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y) {
		if (z < x)
			min = z;
		else
			min = x;
	}
	else {
		if (y < z)
			min = y;
		else
			min = z;
	}

	printf("���� ���� ������ %d �Դϴ�.\n", min);

	return 0;
}