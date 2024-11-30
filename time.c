#include<stdio.h>
int main()
{
	int X,sec,min,hrs;
	printf("enter the number which need to be converted to seconds,minutes,hours");
	scanf("%d\n",&X);
	hrs=X/3600;
	min=(X%3600)/60;
	sec=X%60;
	printf("The value of the entered varibels in hours: %d\n",hrs);
	printf("The value of the entered varibels in minutes: %d\n",min);
	printf("The value of the entered varibels in seconds: %d\n",sec);
}
	
