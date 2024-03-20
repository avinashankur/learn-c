#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, n, temp = 0;
    clrscr();

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    printf("Sorted array: \n");

    for (i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

    getch();
    return 0;
}
