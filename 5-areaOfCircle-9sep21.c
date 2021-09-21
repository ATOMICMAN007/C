//Area of circle
#include<stdio.h>
#include<conio.h>

int main()
{
	float pi, r, area;
	pi = 3.14;
	r = 10.0;
	area = pi * r * r;
	printf("Area of a circle with radius %f units is %f square units",r,area);
	getch();
	return 0;
}