#include <stdio.h>
#include <conio.h>

int main() {
    int n, first = 0, second = 1, next;
    clrscr();

    printf("Enter the number of terms you want in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    
    getch();
    return 0;
}
