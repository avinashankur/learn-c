#include <stdio.h>

int main() {
    int n, sum;
    printf("Sum upto: ");
    scanf("%d", &n);

    sum = (n * (n+1) / 2);

    printf("Sum is %d", sum);
}