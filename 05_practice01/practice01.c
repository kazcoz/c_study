
#include <stdio.h>

struct mmr {
	int a;
	char str[10];
	int b;
};

int main(int argc, char **argv)
{
	struct mmr p;
	printf("%lu\n", sizeof(p));

	int a;
	char str[7];
	int b;

	printf("%p\n", &a);
	printf("%p\n", &str);
	printf("%p\n", &b);

	return 0;
}

