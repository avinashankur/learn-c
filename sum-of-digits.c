#include <stdio.h>
#include <limits.h>

int getSum(int num) {
    int sum = 0;
    
    while(num != 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    
    
    return sum;
}

int main() {
   
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
   
   printf("Result: %d", getSum(num));

    return 0;
}