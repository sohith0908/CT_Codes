// Problem: Write a program to count the number of even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    return 0;
}

/*
Input:
Enter the number of elements: 6
Enter 6 elements: 1 2 3 4 5 6

Output:
Even numbers = 3
Odd numbers = 3
*/

