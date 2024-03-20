#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, j, sum = 0, mat[100][100];
    clrscr();

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element %d %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum = sum + mat[i][i];
    }
    
    printf("Sum of diagonal elements: %d", sum);

    getch();
    return 0;
}