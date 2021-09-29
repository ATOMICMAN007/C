#include<stdio.h>
#include<conio.h>

int main()
{
	int num1, num2, result;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	result = num1 - num2;
	printf("%d - %d equals %d\n",num1,num2,result);
	result = num1 % num2;
	printf("%d * %d equals %d\n",num1,num2,result);
	result = num1 / num2;
	printf("%d / %d equals %d",num1,num2,result);
	getch();
	return 0;
}