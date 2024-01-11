#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2;
    clrscr();
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if(num1 == num2) {
        printf("Equal");
    } else {
        printf("Not Equal");
    }
    
    getch();
    return 0;
}