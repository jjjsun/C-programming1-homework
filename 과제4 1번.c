#include <stdio.h>

int main(void)
{
	int  num=0;
	printf("¾çÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
