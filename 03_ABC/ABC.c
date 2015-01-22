
#include <stdio.h>

void hexa(char *p) {
	int i;
	
	for(i = 0; i < 16; i++) {
		printf("%02x ", p[i]);
	}
	printf("\n");

}

int main(int argc, char **argv)
{
	char abc[] = "ABC";

	hexa(&abc[0]);
	printf("%s: ", abc);


	return 0;
}

