#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 5, 6, 8, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even = 0;
    int odd = 0;
    
    for(int i = 0; i <= size; i++) {
        if (arr[i] == 0) {
            continue;
        }
        else if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("Even: %d\n", even);
    printf("Odd: %d", odd);
    
    return 0;
}