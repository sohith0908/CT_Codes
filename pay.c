#include<stdio.h>
int main()
{
int h,r,w,monthlypay;
printf("enter number of hours:");
scanf("%d",&h);
printf("enter rate per hour");
scanf("%d",&r);
printf("enter number of weeks per month");
scanf("%d",&w);
monthlypay=h*r*w;
printf("monthlypay :%d",monthlypay);
}

