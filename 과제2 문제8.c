#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int code;
	char a;

	printf("아스키 코드값을 입력하시오:");
	scanf_s("%d", &code);
	a = (char)code;
	printf("문자: %c 입니다.", a);
	
	return 0;
}