#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	double w;
	double h;
	double d;
	double vol;
	printf("������ ���� ���� ���̸� �ѹ��� �Է��ϼ���:");
	scanf_s("%lf %lf %lf", &w, &h, &d);

	vol = w * h * d;
	printf("������ ���Ǵ� %lf �Դϴ�.", vol);

	return 0;


	
}