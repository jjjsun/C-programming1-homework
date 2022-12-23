#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double mass;
	double speed;
	double j;

	printf("질량(kg):");
	scanf_s("%lf", &mass);
	printf("속도(m/s):");
	scanf_s("%lf", &speed);
	
	j = 0.5 * mass * speed * speed;

	printf("운동에너지(J): %lf\n", j);

	return 0;
}