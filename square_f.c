#include<stdio.h>
int square(int x);
int main()
{
	int num,R;
	printf("enter a number\n");
	scanf("%d",&num);
	R=square(num);
	printf("the square of the number is %d\n",R);
}
int square(int x)
{
	return(x*x);
}
