
#include <stdio.h>
#include <string.h>

struct person {
	char name[32];
	char phone[11];
	char mail[32];
};

struct person person_data[5];

int main(int argc, char **argv)
{
	strcpy(person_data[0].name, "Kazumi SHIGENO");
	printf("name: %s\n", person_data[0].name);

	return 0;
}

