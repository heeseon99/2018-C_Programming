#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y, z, min;

	printf("3개의 정수를 입력하시오:");
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

	printf("제일 작은 정수는 %d 입니다.\n", min);

	return 0;
}