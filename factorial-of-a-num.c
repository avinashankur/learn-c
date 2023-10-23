#include <stdio.h>
#include <limits.h>

int calc(int num) {
    
    int factorial = 1;
    
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    
    return factorial;
}

int main() {
    int num;
    printf("Number: ");
    scanf("%d", &num);
    
    printf("Result: %d", calc(num));

    return 0;
}