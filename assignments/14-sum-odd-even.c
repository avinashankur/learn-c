//WAP to print sum of even and odd numbers from 1 to N numbers.

#include <stdio.h>

int main() {
    int n, odd = 0, even = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even += i; 
        } else {
            odd += i;
        }
    }

    printf("Odd sum from 1 to %d: %d\n",n, odd);
    printf("Even sum from 1 to %d: %d\n",n, even);
}