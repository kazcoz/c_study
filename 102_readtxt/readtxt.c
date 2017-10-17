
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int f = open("~/Desktop/BigBangTheoryTheme.txt", O_RDONRY);
	read(f, buf, 32);
	printf("%s", buf);
	return 0;
}

