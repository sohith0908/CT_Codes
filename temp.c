#include<stdio.h>
int main()
{
int temp;
printf("enter temp");
scanf("%d",&temp);
{
if(temp<0)
printf("very cold");
else if(temp>10 && temp<20)
printf("cold");
else if(temp>20)
printf("hot");
}
}

