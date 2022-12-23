#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y, z, answer, i;
	srand(time(NULL));
	
	for (i = 0; i < 10; i++) {
		z = rand() % 10;
		y = rand() % 10;
		x = rand() % 4; 
		
		if (z==0)
			printf("%d + %d = ", x, y);
			scanf_s("%d", &answer);
			if (x + y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");
		if (z==1)
			printf("%d - %d = ", x, y);
			scanf_s("%d", &answer);
			if (x - y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");
		if (z == 2)
			printf("%d * %d = ", x, y);
			scanf_s("%d", &answer);
			if (x * y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");
		if (z==3)
			printf("%d / %d = ", x, y);
			scanf_s("%d", &answer);
			if (x / y == answer)
				printf("맞았습니다.\n");
			else
				printf("틀렸습니다.\n");


	}
	return 0;
}