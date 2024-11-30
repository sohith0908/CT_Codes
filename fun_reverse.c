#include <stdio.h>

void reverse(int reverse[]);  

void main(){
    int numb[5];
    printf("Enter the 5 numbers: ");
    scanf("%d %d %d %d %d", &numb[0], &numb[1],&numb[2],&numb[3],&numb[4]);

    reverse(numb); 

    printf("Maximum order: %d %d %d %d %d \n", numb[0], numb[1], numb[2],numb[3],numb[4]);  // Three format specifiers
}

void reverse(int reverse[]){
    int temp, x,y;
    for (y = 1; y <= 3 ; y++)
    {
    for (x = 0; x <= (4 - y); x++) 
    {  
        if (reverse[x] > reverse[x + 1]) 
        {
            temp = reverse[x];
            reverse[x] = reverse[x + 1];
            reverse[x + 1] = temp;
        }
    }
    }
}

