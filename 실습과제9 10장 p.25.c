#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
	int i, j, sum = 0, sum2 = 0;

	//int sum[SIZE] = { 0 };
	//int sum2[SIZE] = { 0 };

	for (i = 0; i < 10000; i++)
		sum = sum + rand() % 6;

	for (j = 0; j < 10000; j++)
		sum2 = sum2 + rand() % 6;

	printf("�ֻ���1�� ���� %d�Դϴ�.\n", sum);
	printf("�ֻ���2�� ���� %d�Դϴ�.", sum2);
	return 0;
}