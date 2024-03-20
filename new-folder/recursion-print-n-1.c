//TODO: Print n to 1 using recursion

#include <stdio.h>

int recursion(int n) {
    if (n == 0) return 1;
    printf("%d \n", n);
    recursion(n-1);

    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    recursion(n);
}