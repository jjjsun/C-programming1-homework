#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a, b, c;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�:");
	scanf_s("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		if (a > b)
			if (b > c)
				if ((b*b) + (c*c) == a*a)
					printf("�����ﰢ���Դϴ�.");
				else
					printf("�Ϲݻﰢ���Դϴ�.");
			else if (b == c)
				printf("�̵�ﰢ���Դϴ�.");
			else
				if (a > c)
					if ((b*b) + (c*c) == a*a)
						printf("�����ﰢ���Դϴ�.");
					else
						printf("�Ϲݻﰢ���Դϴ�.");
				else if (a == c)
					printf("�̵�ﰢ���Դϴ�.");
				else
					if ((b*b) + (a*a) == c*c)
						printf("�����ﰢ���Դϴ�.");
					else
						printf("�Ϲݻﰢ���Դϴ�.");
		else if (a == b)
			if (b == c)
				printf("���ﰢ���Դϴ�.");
			else
				printf("�̵�ﰢ���Դϴ�.");
		else
			if (b > c)
				if ((c*c) + (a*a) == b*b)
					printf("�����ﰢ���Դϴ�.");
				else
					printf("�Ϲݻﰢ���Դϴ�.");
			else if (b ==c)
				printf("�̵�ﰢ���Դϴ�.");
			else 
				if ((b*b) + (a*a) == c*c)
					printf("�����ﰢ���Դϴ�.");
				else
					printf("�Ϲݻﰢ���Դϴ�.");

	}
	else {
		printf("�ùٸ��� ���� �ﰢ���Դϴ�.\n");
	}

	return 0;
}