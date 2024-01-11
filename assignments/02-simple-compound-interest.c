#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    double principal, rate, time;
    clrscr();
    
    printf("Enter the Principal Amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the Rate of Interest (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the Time (in years): ");
    scanf("%lf", &time);
    
    double simple_interest = (principal * rate * time) / 100;
    
    double compound_interest = principal * (pow(1 + rate / 100, time)) - principal;
    
    printf("Simple Interest: %lf\n", simple_interest);
    printf("Compound Interest: %lf\n", compound_interest);
    
    getch();
    return 0;
}
