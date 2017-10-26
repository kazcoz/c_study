
#include <stdio.h>
#include <string.h>

void print_results(char *results_str) {
	printf("%s", results_str);
	return;
}

int main(int argc, char **argv) {

	char str[] =  "I have a pen.\n";
	char before[] = "pen\n";
	char after[] = "apple pen\n";

	printf("%s", str);
	printf("%s", before);
	printf("%s", after);
	print_results(str);
	return 0;
}

