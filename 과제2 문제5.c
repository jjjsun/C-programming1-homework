#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	int a;
	const double PYEONG = 3.3058;
	
	printf("평을 입력하시오:");
	scanf_s("%d", &a);

	printf("%lf 평방미터입니다.", a*PYEONG);
	return 0;
}