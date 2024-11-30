#include<stdio.h>
int main()
{
int seconds,min,hou;
printf("enter the number of seconds:");
scanf("%d",&seconds);
min=seconds/60;
hou=min/60;
printf("minutes:%d",min);
printf("hours:%d\n",hou);
}

