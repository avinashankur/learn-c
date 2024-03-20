// function to print 1 to n using recursion
#include <stdio.h>

void increasing(int n){
    if(n== 0) return;
    increasing(n - 1);
    printf("%d \n", n);
    return;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", n);

    increasing(n);
    return 0;
}