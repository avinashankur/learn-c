// Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference.

#include <stdio.h>

int calc(int num) {
    const int x = 51;
    int result;
    
    // if(num > x) {
    //     result = (num - x) * 3;
    // } else {
    //     result = x - num;
    // }

    result = (num > x) ? (num - x) * 3 : x - num; //shorthand for if else
    
    return result;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", calc(num));

    return 0;
}