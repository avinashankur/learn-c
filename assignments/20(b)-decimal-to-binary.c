#include <stdio.h>
#include <conio.h>

int main(){
    int decimal, binary = 0, base = 1, remainder;
    clrscr();

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0){
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d\n", binary);

    getch();
    return 0;
}
