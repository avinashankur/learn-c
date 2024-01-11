#include <stdio.h>
#include <conio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;
    clrscr();

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal);
    getch();
    return 0;
}
