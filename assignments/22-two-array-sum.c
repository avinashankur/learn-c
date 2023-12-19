#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arrSum[n], i;

    printf("Enter elements for first array:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for second array:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }

    printf("Sum of elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arrSum[i]);
    }

    return 0;
}
