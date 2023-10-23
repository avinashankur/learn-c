#include <stdio.h>
#include <limits.h>

int findMax(int mat[2][3]) {
    int maxElement;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if (mat[i][j] > maxElement) {
                maxElement = mat[i][j];
            }
        }
    }
    
    return maxElement;
}

int main() {
   
   int matrix[2][3] = {{2, 8, 4}, {1, 1, 6}};
   int max = findMax(matrix);
   printf("%d", max);
   

    return 0;
}