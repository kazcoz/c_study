
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

	int a = 255;
	char arr[4];
	
	printf("%lu\n", sizeof(a));
	memcpy(arr, &a, 4);
	printf("「%s」\n", arr);

	for (int c = 0; c < 4; c++) {
		printf("%hhu\n", arr[c]);
	}

	return 0;
}

