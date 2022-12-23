#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a, b, c;

	printf("삼각형의 3변의 입력하시오:");
	scanf_s("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		if (a > b)
			if (b > c)
				if ((b*b) + (c*c) == a*a)
					printf("직각삼각형입니다.");
				else
					printf("일반삼각형입니다.");
			else if (b == c)
				printf("이등변삼각형입니다.");
			else
				if (a > c)
					if ((b*b) + (c*c) == a*a)
						printf("직각삼각형입니다.");
					else
						printf("일반삼각형입니다.");
				else if (a == c)
					printf("이등변삼각형입니다.");
				else
					if ((b*b) + (a*a) == c*c)
						printf("직각삼각형입니다.");
					else
						printf("일반삼각형입니다.");
		else if (a == b)
			if (b == c)
				printf("정삼각형입니다.");
			else
				printf("이등변삼각형입니다.");
		else
			if (b > c)
				if ((c*c) + (a*a) == b*b)
					printf("직각삼각형입니다.");
				else
					printf("일반삼각형입니다.");
			else if (b ==c)
				printf("이등변삼각형입니다.");
			else 
				if ((b*b) + (a*a) == c*c)
					printf("직각삼각형입니다.");
				else
					printf("일반삼각형입니다.");

	}
	else {
		printf("올바르지 않은 삼각형입니다.\n");
	}

	return 0;
}