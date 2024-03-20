#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, j, k, m1[100][100], m2[100][100], add[100][100], pro[100][100];
    clrscr();

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            printf("Enter element %d %d: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element %d %d: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            add[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("Sum of matrices: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d \t", add[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            pro[i][j] = 0;
            for (k = 0; k < n; k++) {
                pro[i][j] = pro[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
    printf("Product of matrices: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d \t", pro[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}