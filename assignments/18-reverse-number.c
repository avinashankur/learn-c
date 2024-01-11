#include <stdio.h>
#include <conio.h>

int main() {
    int num, reversed = 0;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reverse of the number: %d\n", reversed);

    getch();
    return 0;
}
