#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,descriment;
	int type;
	printf("enter the values of a,b and c");
	scanf("%f %f %f ",&a,&b,&c);
	scanf("%d",&type);
	descriment=b*b-4*a*c;
	{
	if(descriment > 0)
	type=1;
	else if(descriment==0)
	type=2;
	else if(descriment<0)
	type=3;
	}
	switch(type)
	{
		case 1:
			root1=(-b+sqrt(descriment))/(2*a);
			root2=(-b-sqrt(descriment))/(2*a);
			printf("the roots are real and distint ");
			printf("root1=%f",root1);
			printf("root2%f",root2);
			break;
		case 2:
			root1=root2=-b/(2*a);
			printf("the roots are real and equal");
			printf("root1=root2=%f",root1);
			break;
		case 3:
			root1=-b/(2*a);
			root2=sqrt(descriment)/(2*a);
			printf("the roots are imaginary");
			printf("root1=%f",root1);
			printf("root2=%f",root2);
			break;
		default :
			printf("invalid input");
	}
}

			
			
		
		
		
