#include <stdio.h>

int main() {
  int num;
  int sum = 0;
  int digit;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (num > 0) {
    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
  }

  printf("The sum of digits is %d.\n", sum);
  return 0;
}
