#include <stdio.h>
#include <string.h>

typedef struct {

	char name[40];
	int age;
}student;

int main(){
	student mike;
	strcpy(mike.name, "Michael Smiith");
	mike.age = 15;
	printf("The name is: %s\n", mike.name);
	printf("The age is: %d\n", mike.age);

	return 0;
}
