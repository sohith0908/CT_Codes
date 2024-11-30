#include<stdio.h>
void main()
{
int n,i,j;
printf("enter the value of n for the first n odd and even numbers ");
scanf("%d",&n);
printf("odd numbers are\n");
for(i=1;i<=n;i=i+2)
{
printf("%d ,", i);
}
printf("even numbers are\n");
for(j=0;j<=n;j=j+2)
{
printf("%d ,", j);
}
}
