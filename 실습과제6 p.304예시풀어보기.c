#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, z, answer, i;
	srand(time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		z = rand() % 10;
		if (z % 4 == 0)
			printf("%d + %d = ", x, y);
			scanf_s("%d", &answer);
			if (x + y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");
		else if(z % 4 == 1)
			printf("%d - %d = ", x, y);
			scanf_s("%d", &answer);
			if (x - y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");
		else if (z % 4 == 2)
			printf("%d * %d = ", x, y);
			scanf_s("%d", &answer);
			if (x * y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");
		else
			printf("%d - %d = ", x, y);
			scanf_s("%d", &answer);
			if (x / y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");



	}
	return 0;
}