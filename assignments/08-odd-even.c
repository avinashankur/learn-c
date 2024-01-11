#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    clrscr();

    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("Even Number");
    } else {
        printf("Odd Number");
    }

    getch();
    return 0;
}
