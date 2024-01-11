#include <stdio.h>
#include <conio.h>

int main() {
  int num, sum = 0, digit;
  clrscr();

  printf("Enter a number: ");
  scanf("%d", &num);

  while (num > 0) {
    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
  }

  printf("The sum of digits is %d.\n", sum);

  getch();
  return 0;
}
