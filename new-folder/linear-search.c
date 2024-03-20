//search an element using linear search

#include <stdio.h>

int main() {
    int data, i, n;
    int a[5] = {1, 2, 3, 4, 5};
    n = 5; // Number of elements in the array

    printf("Enter the number you want to search: ");
    scanf("%d", &data);
    
    for(i = 0; i < n; i++) {
        if(a[i] == data) {
            printf("Element is present at the index %d", i);
            break;
        } 
    }

    if(i==n) {
        printf("Element not found");
    }    

    return 0;
}