#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a b c for the equation ax^2+bx+c=0");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-4*a*c;
if (d>0)
printf("the roots are real and distinct\n your score is 20" );
else if (d=0)
printf("the roots are real and same\n your score is 0");
else
printf("the roots are imaginary\n your score is 10 ");
}
