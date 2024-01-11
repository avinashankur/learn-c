#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &n);

    int isPrime = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0; 
            break;
        }
    }

    if (isPrime) {
        printf("Number is prime\n");
    } else {
        printf("Number is not prime\n");
    }

    getch();
    return 0;
}
