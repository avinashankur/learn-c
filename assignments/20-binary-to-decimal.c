#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1; 

    while (binary > 0) {
        int digit = binary % 10; 
        decimal += digit * base; 
        binary /= 10; 
        base *= 2; 
    }

    return decimal;
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = binaryToDecimal(binary);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
