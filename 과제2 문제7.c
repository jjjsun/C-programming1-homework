#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double mass;
	double speed;
	double j;

	printf("����(kg):");
	scanf_s("%lf", &mass);
	printf("�ӵ�(m/s):");
	scanf_s("%lf", &speed);
	
	j = 0.5 * mass * speed * speed;

	printf("�������(J): %lf\n", j);

	return 0;
}