#include <stdio.h>
int main()
{
	double degree_fah = 0;
	double degree_cel = 0;
	int i;
	printf("F		C\n");
	for(i = 0; i <=300; i+=20)
	{
		degree_fah = i;
		degree_cel = (degree_fah - 32.0) * 5.0 / 9.0;
		printf("%.0f		%.1f\n",degree_fah, degree_cel);
	}
	return 0;
}
/*
sh-4.3$ ./tempConversionAkeemWilkins
F               C
0               -17.8
20              -6.7
40              4.4
60              15.6
80              26.7
100             37.8
120             48.9
140             60.0
160             71.1
180             82.2
200             93.3
220             104.4
240             115.6
260             126.7
280             137.8
300             148.9

/*






*/
