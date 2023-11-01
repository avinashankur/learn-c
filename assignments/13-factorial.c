#include <stdio.h>

int calc(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    return factorial;
}

int main() {
    int n, result;
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);

    if (n >= 0) {
        result = calc(n);
    } else {
        printf("Factorial is not defined for negative numbers");
    }

    printf("Factorial is: %d", result);
}