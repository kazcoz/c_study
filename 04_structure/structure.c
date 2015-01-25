
#include <stdio.h>
#include <string.h>

struct person {
	char name[32];
	char phone[11];
	char mail[32];
};

struct person person_data[3] = {
	{"Kazumi SHIGENO", "090123456", "shigeno@example.com"},
	{"Jim CARREY", "090987654", "jim@example.com"},
	{"Keisuke KUWATA", "090135246", "kuwata@example.com"},
};

int main(int argc, char **argv)
{
	//strcpy(person_data[0].name, "Kazumi SHIGENO");

	int i = 0;
	for(i = 0; i < 3; i++) {
		printf("No.%d: \n", i + 1);
		printf(" name: %s\n", person_data[i].name);
		printf("phone: %s\n", person_data[i].phone);
		printf(" mail: %s\n\n", person_data[i].mail);
	}

	return 0;
}

