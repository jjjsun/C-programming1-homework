#include <stdio.h>

int main(void)
{
	int num;
	int nsum=0;
	printf("���� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);

	while (num) {
		nsum += num % 10;
		num /= 10;
	}

	printf("�� �ڸ����� ���� %d�Դϴ�.\n", nsum);
	return 0;
}
