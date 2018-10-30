/*Prompt the user for a series of ints. * Print them out in reverse. */

#include <stdlib.h>
#include <stdio.h>

#define SIZE 5 

int main()
{
	int arr[SIZE];
	int temp;
	int i = 0;
	while (scanf("%d", &temp) > 0)
	{
		arr[i] = temp;
		i++;
	}
	/* i now points_past_ the last element. */
	i--;	/*POint to last*/
	for (; i>=0; i--)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
