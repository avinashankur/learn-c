#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], arrEven[n], arrOdd[n];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arrEven[evenIndex++] = arr[i];
        } else {
            arrOdd[oddIndex++] = arr[i];
        }
    }

    printf("Even Array is: ");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d ", arrEven[i]);
    }

    printf("\nOdd Array is: ");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d ", arrOdd[i]);
    }

    return 0;
}
