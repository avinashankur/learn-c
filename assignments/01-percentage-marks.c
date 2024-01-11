#include <stdio.h>
#include <conio.h>

float main() {
    float math, phy, chem, eng, cs;
    float sum, perc;
    clrscr();
    
    printf("Enter marks in Maths: ");
    scanf("%f", &math);
    printf("\n");
    printf("Enter marks in Physics: ");
    scanf("%f", &phy);
    printf("\n");
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chem);
    printf("\n");
    printf("Enter marks in English: ");
    scanf("%f", &eng);
    printf("\n");
    printf("Enter marks in Computer Science: ");
    scanf("%f", &cs);
    
    sum = math + phy + chem + eng + cs;
    perc = sum / 5;
    
    printf("Total Marks: %0.2f\n", sum);
    printf("Percentage: %0.2f%%", perc );

    getch();
    return 0;
}