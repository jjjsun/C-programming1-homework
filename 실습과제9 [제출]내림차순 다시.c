#include <stdio.h>
#define MAX_COUNT 5

int main()
{
	int num[MAX_COUNT], i, step, temp;

	printf("정수 %d개를 입력하시오:", MAX_COUNT);
	for (i = 0; i < MAX_COUNT; i++)
		scanf_s("%d", num + i);
	for (step = 0; step < MAX_COUNT - 1; step++) {
		for (i = 0; i < MAX_COUNT - 1 - step; i++) {
			if (num[i] < num[i + 1]) {
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < MAX_COUNT; i++)
		printf("%d  ", num[i]);
	printf("\n");

	return 0;
}