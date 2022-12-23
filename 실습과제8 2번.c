#include <stdio.h>
int get_num(void);
int is_Prime(int j);

int main(void) {
    int n = get_num();
    for (int j = 2; j <= n; j++) {
        if (is_Prime(j) == 1) {
            printf("%d", j);
        }
    }
}

int get_num(void) {
    int n;
    printf("������ �Է��Ͻÿ�: ");
    scanf_s("%d", &n);
    return n;
}

int is_Prime(int j) {
    int divisor = 0;
    for (int i = 1; i <= j; i++) {
        if (j % i == 0) {
            divisor++;
        }
    }return (divisor == 2);
}