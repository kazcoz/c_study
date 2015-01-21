
#include <stdio.h>

void swap(int *a, int *b) {
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(int argc, char **argv)
{
	int a = 3;
	int b = 5;
	printf("a = %d: b = %d\n", a, b);

	swap(&a,&b);
	printf("a = %d: b = %d\n", a, b);

	return 0;
}

