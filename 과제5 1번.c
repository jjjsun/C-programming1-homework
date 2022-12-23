#include <stdio.h>

char charc;
int i = 0;
int check_alpha(charc)
{
	if ((charc >= 'a' && charc <= 'z') || (charc >= 'A' && charc <= 'Z')){
		printf("%c는 알파벳입니다.\n",charc);
	}
	else {
		printf("%c는 알파벳이 아닙니다.\n",charc);
	}
}
int main()
{
	while (i <= 2)
	{
		printf("알파벳을 입력하시오:");
		scanf_s("%c", &charc);
		check_alpha(charc);
		i++;
		getchar();
	}
		

}
