#include<stdio.h>
int main()
{
	int A,B,C,D,E,total_marks,percentage;
	printf("enter first subject marks");
	scanf("%d",&A);
	printf("enter second subject marks");
	scanf("%d",&B);
	printf("enter third subject marks");
	scanf("%d",&C);
	printf("enter fourth subject marks");
	scanf("%d",&D);
	printf("enter fift subject marks");
	scanf("%d",&E);
	total_marks=A+B+C+D+E;
	percentage=total_marks/500*100;
	printf("Total marks scored=%d",total_marks);
	printf("percentage=%d",percentage);
}
	
