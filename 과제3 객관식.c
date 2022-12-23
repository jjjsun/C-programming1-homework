#include <stdio.h>

int main(void)
{
	printf("1. 수식 !(1 + 1 >= 2)의 결과값은 얼마인가?\n");
	printf("답 : 1\n\n");

	printf("3. 조건\"x가 0 또는 1이면\"을 올바르게 구현한 것을 모두 골라보자.\n");
	printf("1) if(x==0 && x==1) 2) if(x==0 || x==1) 3) if(!(x!=0 && x!=1)) 4) if(x==0 | x==1)\n");
	printf("답 : 2,3\n\n");

	printf("5. switch문은 if-else문으로 변경하고 if-else문은 switch문으로 변경하라.\n");
	printf("(a)\nif (x==-1)\n\tnum--;\nelse if (x==1)\n\tnum++;\nelse\n\tnum = 0;\n");
	printf("답 : \nswitch(x)\n{\n\tcase -1:\n\tnum--;\tbreak;\n\tcase1:\n\t\tnum++;\tbreak;\n\tcase0:\n\t\tnum=0;\tbreak;\n\tdefault\n}");

	printf("(b)\nswitch(code)\n{\n\tcase 'X':\n\t\tx++;\tbreak;\n\tcase 'Y':\n\t\ty++;\tbreak;\n\tdefault:\n\t\tx=y=0;\tbreak;\n}\n");
	printf("답 :\nif(code=='X')\n\tx++;\nelse if(code=='Y')\n\ty++;\nelse\n\tx=y=0;\n");

	printf("7. 다음 프로그램을 출력을 쓰라.\n(a)\n");
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