#include<stdio.h>

int binarySearch(int *arr, int n, int data) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == data) {
            return mid;
        } else if (arr[mid] < data) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[8] = {1, 2, 3, 6, 87, 90, 123, 560};
    int n = 8, data;

    printf("Enter the number you want to search: ");
    scanf("%d", &data);
    
    int index = binarySearch(arr, n, data);
    
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
