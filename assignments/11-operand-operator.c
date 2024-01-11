#include <stdio.h>
#include <conio.h>

int main() {
    double operand1, operand2;
    char operator;
    clrscr();

    printf("Enter the first operand: ");
    scanf("%lf", &operand1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter the second operand: ");
    scanf("%lf", &operand2);

    double result;

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    getch();
    return 0;
}
