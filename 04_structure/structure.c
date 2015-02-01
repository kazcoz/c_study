
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change_ul(unsigned char *c) {
	if(*c >= 97 && *c <= 122) {
		*c -= 32;
	}
}

struct person {
	char name[32];
	char phone[11];
	char mail[32];
};

struct person person_data[3] = {
	{"kazumi SHIGENO", "090123456", "shigeno@example.com"},
	{"Jim CARREY", "090987654", "jim@example.com"},
	{"K", "090135246", "kuwata@example.com"},
};

int main(int argc, char **argv)
{
	//strcpy(person_data[0].name, "Kazumi SHIGENO");

	/*FILE *fp;

	if((fp = fopen("/root/address.txt", "w")) != NULL) {

		int i = 0;
		for(i = 0; i < 3; i++) {
			fprintf(fp, "No.%d: \n", i + 1);
			fprintf(fp, " name: %s\n", person_data[i].name);
			fprintf(fp, "phone: %s\n", person_data[i].phone);
			fprintf(fp, " mail: %s\n\n", person_data[i].mail);
		}
		fclose(fp);
	} else {
		printf("ERROR: Can't open file.\n");
		exit(1);
	}*/


	printf("%s\n", person_data[0].name);
	change_ul((unsigned char *)&person_data[0].name);
	printf("%s\n", person_data[0].name);



	return 0;
}

