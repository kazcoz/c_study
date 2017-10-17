
#include <stdio.h>

static int goal_count = 0;

void walk(int y, int x){
	if (y == 2 && x == 2) {
		// printf("GOAL!\n");
		printf("(%d, %d)\n", y, x);
		goal_count++;
		return;
	}

	if (x < 2) {
		printf("(%d, %d)\n", y, x);
		walk(y, x + 1);
	}

	if (y < 2) {
		printf("(%d, %d)\n", y, x);
		walk(y + 1, x);
	}

}

int main(int argc, char **argv)
{
	walk(0, 0);
	printf("c = %d\n", goal_count);

	return 0;
}

