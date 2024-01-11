#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int i, sum, num, count = 0;
    clrscr();
    printf("Armstrong number between 1 and 100 are:\n");

    for (i = 1; i <= 100; i++) {
        num = i;
        while (num != 0)
        {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count) + pow((num % 100 - num % 10) / 10, count) + pow((num % 1000 - num % 100) / 100, count);
        if (sum == i)
        {
            printf("%d \n", i);
        }
        count = 0;
    }
    getch();
    return 0;
}
