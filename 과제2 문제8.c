#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int code;
	char a;

	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�:");
	scanf_s("%d", &code);
	a = (char)code;
	printf("����: %c �Դϴ�.", a);
	
	return 0;
}