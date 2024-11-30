#include<stdio.h>
void main()
{
	float D,T,Speed;
	printf("Enter distance covered  by the vehicle ");
	scanf("%f",&D);
	printf("Enter the time required to cover that disance");
	scanf("%f",&T);
	Speed=D/T;
	printf("the speed of the vehicle is %f",Speed);
}
