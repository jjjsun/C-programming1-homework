#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	char op;
	int x;
	int y;
	int result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5)\n");
	printf(">>");

	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("�������� �ʴ� �������Դϴ�.");

	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}