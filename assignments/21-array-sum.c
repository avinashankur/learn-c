#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    clrscr();
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], i, sum = 0;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);

    getch();
    return 0;
}
