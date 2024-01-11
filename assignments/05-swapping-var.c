#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c;
    clrscr();

    printf("enter two numbers:");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);

    getch();
    return 0;
}
