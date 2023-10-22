#include <stdio.h>

int main() {
    
    int arr[] = {5, 3, 6, 7, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    float result = 0;
    result = (float) sum / size;
    printf("Average: %0.2f", result);
    
    return 0;
}