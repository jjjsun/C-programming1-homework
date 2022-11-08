#include <stdio.h>

int main(void)
{
	int num;
	int nsum=0;
	printf("양의 정수를 입력하시오:");
	scanf_s("%d", &num);

	while (num) {
		nsum += num % 10;
		num /= 10;
	}

	printf("각 자리수의 합은 %d입니다.\n", nsum);
	return 0;
}
