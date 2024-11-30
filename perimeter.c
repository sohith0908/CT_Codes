#include<stdio.h>
int main()
{
	int a,b,h,perimeter,area;
	printf("enter the side of a triangle");
	scanf("%d",&a);
	printf("enter the height of a triangle");
	scanf("%d",&h);
	printf("enter the base of a triangle");
	scanf("%d",&b);
	perimeter=a+h+b;
	area=1/2*b*h;
	printf("perimeter of triangle is %d",perimeter);
	printf("area of triangle is %d",area);
}	
	
