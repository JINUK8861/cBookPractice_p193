#include <stdio.h>

int main(void) {
		//��1
	/*
		�� 3, �� 3�� char�� 2���� �迭 bingo�� ����, �׸��� ���� ����ǵ��� ���α׷� �ۼ�
		��, ����� �ʱ�ȭ�� ���ÿ� ���� �� ��

		�׸�)
		O X X
		X O X
		X X O
	*/

	char bingo[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				bingo[i][j] = 'O';
			}
			else {
				bingo[i][j] = 'X';
			}
		}
	}

	// + ����ϱ�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%c ", bingo[i][j]);
		}
		printf("\n");
	}

	return 0;
}