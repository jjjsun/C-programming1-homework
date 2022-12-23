#include <stdio.h>
int main()
{
	int answer = 59;
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측하여 보시오: ");
		scanf_s("%d", &guess);
		tries++;
		if (guess > answer)
			printf("제시한 정수가 높습니다.");
		if (guess < answer)
			printf("제시한 정수가 낮습니다.");
	} while (guess != answer);
		printf("축하합니다. 시도횟수=%d", tries);
	return 0;
}