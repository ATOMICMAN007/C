//Area of triangle
#include<stdio.h>
#include<conio.h>
int main()
{
	float base, height, area;
	base = 3.0;
	height = 8.0;
	area = 0.5 * base * height;
	printf("Area of a triangle with base %f and height %f is %f",base,height,area);

	getch();
	return 0;
}