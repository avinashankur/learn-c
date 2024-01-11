#include <stdio.h>
#include <conio.h>

int main() {
    int n, sum;
    clrscr();

    printf("Sum upto: ");
    scanf("%d", &n);

    sum = (n * (n+1) / 2);

    printf("Sum is %d", sum);

    getch();
    return 0;
}