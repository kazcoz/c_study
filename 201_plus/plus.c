
#include <stdio.h>

void add_print(int a, int b) {
	printf("a + b = %d\n", a + b);
	return;
}

int main(int argc, char **argv) {

	int a = 5;
	int b = 3;
	
	add_print(a, b);

	return 0;
}

