#include <stdio.h>


int main(void)
{
	double rate;
	double usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��Ͻÿ�:");
	scanf_s("%d", &krw);

	usd = krw / rate;
	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd);

	return 0;
}