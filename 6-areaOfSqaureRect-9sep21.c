//Area of square and rectangle
#include<stdio.h>
#include<conio.h>

int main()
{
	float square_side, rect_length, rect_width, s_area, rect_area;
	square_side = 5;
	rect_length = 10;
	rect_width = 2;
	s_area = square_side * square_side;
	rect_area = rect_length * rect_width;
	
	printf("Area of square of side %f = %f\n\n",square_side,s_area);
	printf("Area of rectangle with dimentions %f by %f = %f",rect_length,rect_width,rect_area);
	getch();
	return 0;
}