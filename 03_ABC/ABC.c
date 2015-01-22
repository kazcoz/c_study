
#include <stdio.h>

void hexa(unsigned char *p) {
	int i;
	
	for(i = 0; i < 16; i++) {
		printf("%02x ", p[i]);
	}
	printf("\n");

}

int main(int argc, char **argv)
{
	//unsigned char abc[] = "ABC";
	int a = 0xaabbccdd;
	//abc[1] = 0xff;

	hexa((unsigned char *)&a);
	//printf("%s: ", abc);


	return 0;
}

