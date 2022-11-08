#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int com;
	int num=0;
	int i = 0;

	srand(time(NULL));
	while (i<5) {
		printf("가위,바위,보 중에서 하나를 선택하시오(1:가위,2:바위,3:보): ");
		scanf_s("%d",&num);

		com = rand() % 3 + 1;
		if ((com == 1) && (num == 1) || (com == 3) && (num == 3) || (com == 3) && (num == 3))
			printf("컴퓨터는 %d를 선택하였고,비겼습니다.\n", com);
		else if ((com == 1) && (num == 2) || (com == 2) && (num == 3) || (com == 3) && (num == 1))
			printf("컴퓨터는 %d를 선택하였고,당신이 이겼습니다.\n", com);
		else
			printf("컴퓨터는 %d를 선택하였고,당신이 졌습니다.\n", com);
		i++;
	}
	return 0;
}