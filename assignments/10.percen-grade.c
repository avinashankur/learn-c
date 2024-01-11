#include <stdio.h>
#include <conio.h>

int main() {
    int m1, m2, m3, m4, m5;
    clrscr();
    
    printf("Enter marks for five subjects:\n");
    printf("Subject Maths: ");
    scanf("%d", &m1);
    printf("Subject Physics: ");
    scanf("%d", &m2);
    printf("Subject Chemistry: ");
    scanf("%d", &m3);
    printf("Subject English: ");
    scanf("%d", &m4);
    printf("Subject Computer: ");
    scanf("%d", &m5);
    
    int totalMarks = m1 + m2 + m3 + m4 + m5;
    float percentage = (float)totalMarks / 5;
    
    char grade;
    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else {
        grade = 'D';
    }
    
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    
    getch();
    return 0;
}
