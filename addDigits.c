#include <stdio.h>

int addDigits(int num) {
    if (num == 0) {
        return 0;
    } else if (num % 9 == 0) {
        return 9;
    } else {
        return num % 9;
    }
}

int main() {
    int num;
    scanf("%d", &num);

    int result = addDigits(num);
    printf("%d", result);
}
