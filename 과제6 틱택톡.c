#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_x_win(char board[3][3]) {
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 1;//���� 0��
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 1;//���� 1��
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 1;//���� 2��
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 1;//���� 0��
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 1;//���� 1��
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 1;//���� 2��
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 1;//�밢�� �»��
	if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
		return 1;//�밢�� ����
}
int check_o_win(char board[3][3]) {
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 1;//���� 0��
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 1;//���� 1��
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 1;//���� 2��
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 1;//���� 0��
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 1;//���� 1��
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 1;//���� 2��
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 1;//�밢�� �»��
	if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
		return 1;//�밢�� ����}
}
int main() {
	int X, O;
	char board[3][3];
	int x, y, i, k = 0;
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) {
			board[x][y] = ' ';
			//printf("board[%d][%d]\n", x, y);
		}



	while (k < 9) {
		printf("(x, y) ��ǥ: ");
		scanf_s(" %d %d", &x, &y);
		if (board[x][y] != ' ') {
			printf("�ٽ� �Է��Ͻʽÿ�\n");
			continue;
		}
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';
		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
		printf("board[1][0]:%c and board[2][0]:%c\n", board[1][0], board[2][0]);
		X = check_x_win(board);
		O = check_o_win(board);
		if (X == 1) {
			printf("X�� �¸��Ͽ����ϴ�.");
			return 0;
		}
		if (O == 1) {
			printf("O�� �¸��Ͽ����ϴ�.");
			return 0;
		}
		k++;
	}
	if (k == 9)
		printf("���º��Դϴ�.");

	return 0;
}
