#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x , y value");
	scanf("%d%d",&x,&y);
	{
	if(x>0 && y>0)
		printf("it iss in first quadrate");
	else if(x<0 && y>0)
		printf("it iss in second quadrate");
	else if(x<0 && y<0)
		printf("it iss in third quadrate");
        else if(x>0 && y<0)
		printf("it iss in fourth quadrate");
	}
}
