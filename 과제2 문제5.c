#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	int a;
	const double PYEONG = 3.3058;
	
	printf("���� �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	printf("%lf �������Դϴ�.", a*PYEONG);
	return 0;
}