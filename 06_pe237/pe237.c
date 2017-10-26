
#include <stdio.h>

int main(int argc, char **argv)
{
	int board[4][4];
	int i, j, k;

	k = 0;
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			board[i][j] = k;
			k++;
		}
	}

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%.2d  ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}

