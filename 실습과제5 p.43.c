#include <stdio.h>
int main()
{
	int answer = 59;
	int guess;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf_s("%d", &guess);
		tries++;
		if (guess > answer)
			printf("������ ������ �����ϴ�.");
		if (guess < answer)
			printf("������ ������ �����ϴ�.");
	} while (guess != answer);
		printf("�����մϴ�. �õ�Ƚ��=%d", tries);
	return 0;
}