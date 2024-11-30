#include<stdio.h>
int main()
{
float i1,i2,i3,i4,i5,total;
printf("enter the prices of 5 items :");
scanf("%f%f%f%f%f",&i1,&i2,&i3,&i4,&i5);
total=i1+i2+i3+i4+i5;
printf("price of item1: %f\n",i1);
printf("price of item2: %f\n",i2);
printf("price of item3: %f\n",i3);
printf("price of item4: %f\n",i4);
printf("price of item5: %f\n",i5);
printf("total:%f",total);
}
