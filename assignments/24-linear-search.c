#include <stdio.h>

int main() {
    int array[100], key, i, number;
    
    printf("Enter the number of elements in array: ");
    scanf("%d",&number);
   
    for ( i = 0 ; i < number ; i++ ){
        printf("Enter element %d: ", i + 1);
        scanf("%d",&array[i]);
    }    
    
    printf("Enter the number to key: ");
    scanf("%d",&key);
    
    for ( i = 0 ; i < number ; i++ ) {
        if ( array[i] == key ){
            printf("%d is present at location %d.\n", key, i+1);
            break;
        }
    }
    
    if ( i == number ) {
        printf("%d is not present in array.\n", key);
    }    
    
    return 0;
}
