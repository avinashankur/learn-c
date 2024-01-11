#include <stdio.h>
#include <conio.h>

int main() {
    int year;
    clrscr();
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (year % 4 == 0) {
        printf("Leap Year");
    } else {
        printf("Not a leap year");
    }

    getch();
    return 0;
}
