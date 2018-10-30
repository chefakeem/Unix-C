/*Prompt the user for a series of ints. * Print them out in reverse. */

#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

void increase (int ** arr )
{

       *arr = realloc(*arr, 5 * sizeof(int));
}

int main()
{

	int * arr = malloc(4 * sizeof *arr);

	int temp;
	int i = 0;
	while (scanf("%d", &temp) > 0)
	{
		if(i>4)
			increase(&arr); // calling the realloc function	
			arr[i] = temp;
			i++;
	}
	

	/* i now points_past_ the last element. */
	i--;	/*POint to last*/
	for (; i>=0; i--)
	{
		printf("%d\n", arr[i]);
	}

	free(arr); //free function, free the memory you allocated

	return 0;
}
