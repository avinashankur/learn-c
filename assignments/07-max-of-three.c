#include <stdio.h>
#include <conio.h>

int main() {
    int x, y, z, max;
    clrscr();

    printf("Enter the numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
     max = x;
    else max = y;
   
    if (max > z)
        printf("The largest value is %d.", max);
    else
        printf("The largest value is %d.", z);

    getch();
    return 0;
}
