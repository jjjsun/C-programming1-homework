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
		printf("����,����,�� �߿��� �ϳ��� �����Ͻÿ�(1:����,2:����,3:��): ");
		scanf_s("%d",&num);

		com = rand() % 3 + 1;
		if ((com == 1) && (num == 1) || (com == 3) && (num == 3) || (com == 3) && (num == 3))
			printf("��ǻ�ʹ� %d�� �����Ͽ���,�����ϴ�.\n", com);
		else if ((com == 1) && (num == 2) || (com == 2) && (num == 3) || (com == 3) && (num == 1))
			printf("��ǻ�ʹ� %d�� �����Ͽ���,����� �̰���ϴ�.\n", com);
		else
			printf("��ǻ�ʹ� %d�� �����Ͽ���,����� �����ϴ�.\n", com);
		i++;
	}
	return 0;
}