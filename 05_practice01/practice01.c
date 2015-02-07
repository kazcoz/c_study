
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
	return 0;
}

