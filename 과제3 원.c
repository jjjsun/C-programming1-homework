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

	printf("ù��° ���� x��ǥ,y��ǥ,�������� �ι�° ���� x��ǥ,y��ǥ,�������� ������� �Է��Ͻÿ� :");
	scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		r = pow(((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)),0.5);
		if (r = (r1 + r2))
			printf("�� ���� ��Ĩ�ϴ�.");
		else if (r > (r1 + r2))
			printf("�� ���� ��ġ�� �ʽ��ϴ�.");
		else 
			if (r1 > r2)
				if (r1 < r2 * 2)
					printf("�� ���� ��Ĩ�ϴ�.");
				else
					printf("�Ѱ��� ���� �ٸ� �� ���� ���Ե˴ϴ�.");
			else
				if (r2 < r1 * 2)
					printf("�� ���� ��Ĩ�ϴ�.");
				else
					printf("�Ѱ��� ���� �ٸ� �� ���� ���Ե˴ϴ�.");
		return 0;

}