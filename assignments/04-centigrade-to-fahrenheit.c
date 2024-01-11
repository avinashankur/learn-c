#include <stdio.h>
#include <conio.h>

int main() {
    float temp;
    clrscr();
    printf("Enter temp: ");
    scanf("%f", &temp);
   
    float fahren = 0;
    fahren = 32+(9/5.0*temp);
    printf("%0.2fF", fahren);

    getch();
    return 0;
}
