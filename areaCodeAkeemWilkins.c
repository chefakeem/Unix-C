#include <stdio.h>
int main()
{

	int area_code = 0;
	printf("Enter and area code to find your city in the state of Georgia: ");
	scanf("%d", &area_code);
	switch(area_code)
	{
		case 229:
			printf("%d is the area code for Albany.\n ", area_code);
		        break;
		case 404:
			printf("%d is the area code for Atlanta.\n ", area_code);
			break;
		case 470:
			printf("%d is the area code for Atlanta.\n ", area_code);
			break;
		case 478:
			printf("%d is the area code for Macon.\n ", area_code);
			break;
		case 678:
			printf("%d is the area code for Atlanta.\n ", area_code);
			break;
		case 706:
			printf("%d is the area code for Columbus.\n ", area_code);
			break;
		case 770:
			printf("%d is the area code for Atlanta.\n ", area_code);
			break;
		case 912:
			printf("%d is the area code for Savannah.\n ", area_code);
			break;
		default:
			printf(" Area code not recognized.\n ");
			break;
	}
 	return 0;
}
/*
Enter and area code to find your city in the state of Georgia: 706
706 is the area code for Columbus.

sh-4.3$ ./areaCodeAkeemWilkins
Enter and area code to find your city in the state of Georgia: 678
678 is the area code for Atlanta.

sh-4.3$ ./areaCodeAkeemWilkins
Enter and area code to find your city in the state of Georgia: 470
470 is the area code for Atlanta.




*/
