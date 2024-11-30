#include<stdio.h>
int main()
{
	int i=1,num,f=1;
	printf("enter the maximum range of the number");
	scanf("%d",&num);
	while (i<num)
	{
		f=f*i;
		i++;
	}
	printf("the factorial of the number is %d",f);	
}
