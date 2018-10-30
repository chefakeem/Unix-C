/*read in age from keyboard until negative number is entered*?
#include <stdio.h>
#define ARRAY_SIZE 20
int main(){
	int age [ARRAY_SIZE];
	int arrayCount = 0;
	int inAge;
	printf("Enter an age, negative to stop: ");
	while (inAge >= 0){
		scanf("%d", &inAge);
		arrayCount++	
		age[arrayCount] = inAge;
	}
	for ( i = 0; i < arrayCount; i++)
		printf("%d ", age[i]);
	printf("\n");
	return 0;


}
