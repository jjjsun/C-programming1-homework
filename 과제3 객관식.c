#include <stdio.h>

int main(void)
{
	printf("1. ���� !(1 + 1 >= 2)�� ������� ���ΰ�?\n");
	printf("�� : 1\n\n");

	printf("3. ����\"x�� 0 �Ǵ� 1�̸�\"�� �ùٸ��� ������ ���� ��� �����.\n");
	printf("1) if(x==0 && x==1) 2) if(x==0 || x==1) 3) if(!(x!=0 && x!=1)) 4) if(x==0 | x==1)\n");
	printf("�� : 2,3\n\n");

	printf("5. switch���� if-else������ �����ϰ� if-else���� switch������ �����϶�.\n");
	printf("(a)\nif (x==-1)\n\tnum--;\nelse if (x==1)\n\tnum++;\nelse\n\tnum = 0;\n");
	printf("�� : \nswitch(x)\n{\n\tcase -1:\n\tnum--;\tbreak;\n\tcase1:\n\t\tnum++;\tbreak;\n\tcase0:\n\t\tnum=0;\tbreak;\n\tdefault\n}");

	printf("(b)\nswitch(code)\n{\n\tcase 'X':\n\t\tx++;\tbreak;\n\tcase 'Y':\n\t\ty++;\tbreak;\n\tdefault:\n\t\tx=y=0;\tbreak;\n}\n");
	printf("�� :\nif(code=='X')\n\tx++;\nelse if(code=='Y')\n\ty++;\nelse\n\tx=y=0;\n");

	printf("7. ���� ���α׷��� ����� ����.\n(a)\n");
	int x = 0;
	switch (x)
	{
	case 0:
		printf("0\n");
	case1:
		printf("1\n");
		break;
	}
	printf("(b)\n");
	if (1 > 2)
		if (3 < 4)
			printf("A\n");
		else
			printf("B\n");
	printf("C\n");
}