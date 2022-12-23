#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int x1=0;
	int y1=0;
	int r1=0;
	int x2=0;
	int y2=0;
	int r2=0;
	double r = 0;

	printf("첫번째 원의 x좌표,y좌표,반지름과 두번째 원의 x좌표,y좌표,반지름을 순서대로 입력하시오 :");
	scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		r = pow(((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)),0.5);
		if (r = (r1 + r2))
			printf("두 원은 겹칩니다.");
		else if (r > (r1 + r2))
			printf("두 원은 겹치지 않습니다.");
		else 
			if (r1 > r2)
				if (r1 < r2 * 2)
					printf("두 원은 겹칩니다.");
				else
					printf("한개의 원이 다른 한 원에 포함됩니다.");
			else
				if (r2 < r1 * 2)
					printf("두 원은 겹칩니다.");
				else
					printf("한개의 원이 다른 한 원에 포함됩니다.");
		return 0;

}