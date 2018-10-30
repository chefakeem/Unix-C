#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int t;
	int entries;

	printf("Enter the number of entries: \n"); // ask the user the size of the array
	scanf("%d", &entries);

	int * a1 = (int*) malloc(sizeof(int) * entries);
	int * a2 = (int*) malloc(sizeof(int) * entries);
	/* Populate arrays */
	for (i=0; i <= entries; i++)
	{
		a1[i] = rand() % 600; // generates random number 0-599. 
		a2[i] = i; //acts as counter since it's value is the index of i.  
	}
	/* Swap the two arrays */
	for (i=0; i<= entries; i++)
	{
		t = a1[i];
		a1[i] = a2[i];
		a2[i] = t;
	}
	/* Print the arrays */
	for (i=0; i<= entries; i++)
	{
		printf("%d : %d\n", a1[i], a2[i]);
	}
	free(a1);
	free(a2);

	return 0;
}	
