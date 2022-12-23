#include <stdio.h>

int snum(int a, int b)
{
	int sum = 0;
	for (a; a <= b; a++)
	{
		sum += a;
	}
	return sum;
}

int bnum(int a, int b)
{
	int a1 = a;
	for (int k = 2;; k++) {
		a = a * a1;
		if (a > b) {
			return k - 1;
		}
	}
}





int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", snum(a, b));
	printf("%d\n", bnum(a, b));
	
}