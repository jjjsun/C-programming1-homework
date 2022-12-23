#include <stdio.h>


int dis;
int get_distance(int x1, int y1, int x2, int y2) {
	if (x1 >= x2){
		if (y1 >= y2) {
			dis = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) * 1 / 2;
			printf("두 점 사이의 거리는 %d입니다.\n", dis);
		}
		else {
			dis = ((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1)) * 1 / 2;
			printf("두 점 사이의 거리는 %d입니다.\n", dis);
		}
	}
	else {
		if (y1 >= y2) {
			dis = ((x2 - x1) * (x2 - x1) + (y1 - y2) * (y1 - y2)) * 1 / 2;
			printf("두 점 사이의 거리는 %d입니다.\n", dis);
		}
		else {
			dis = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) * 1 / 2;
			printf("두 점 사이의 거리는 %d입니다.\n", dis);
	}
}
int main(void){
	printf("x1,x2,y1,y2를 순서대로 입력하시오");
	scanf_s("%d %d %d %d", &x1, &x2, &y1, &y2);
	get_distance(int x1, int y1, int x2, int y2);
}
