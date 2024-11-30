#include<stdio.h>
float main()
{
float p,h,r,intrest;
printf("enter number of hours,rate per hour,principle amount:");
scanf("%f%f%f",&h,&r,&p);
printf("enter rate per hour");
scanf("%f",&r);
printf("enter the principle amount");
scanf("%f",&p);
intrest=(h*r*p)/100;
printf("simple intrest : %f",(h*r*p)/100);
}
