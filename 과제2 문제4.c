#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	double w;
	double h;
	double d;
	double vol;
	printf("상자의 가로 세로 높이를 한번에 입력하세요:");
	scanf_s("%lf %lf %lf", &w, &h, &d);

	vol = w * h * d;
	printf("상자의 부피는 %lf 입니다.", vol);

	return 0;


	
}