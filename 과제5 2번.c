#include <stdio.h>

int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("%d는 윤년입니다.\n", year);
	}
	else {
		printf("%d는 윤년이 아닙니다.\n", year);
	}
}
int main(void)
{
	int i = 1;
	while (i <= 3)
	{
		printf("년도를 입력하시오:");
		scanf_s("%d", &year);
		is_leap(year);
		i++;
	}
}