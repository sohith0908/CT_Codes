#include<stdio.h>
void main()
{
	float height;
	printf("enter your height \n");
	scanf("%f",&height);
	if(height>160)
		printf("the person is tall\n");
	else if (height<=160)
		printf("the person is short\n");
}
