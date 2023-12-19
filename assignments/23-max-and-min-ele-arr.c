#include <stdio.h>

int main() {
    int arr[4] = {4, -1, 9, 0}, max = arr[0], min = arr[0];
    
    for (int i = 0; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Maximum element is %d.\n", max);
    printf("Minimum element is %d.\n", min);
    
    return 0;
}