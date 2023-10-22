#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPerfectSquare(long long x) {
    if (x > 0) {
        long long sr = (long long) sqrtl(x);
        return (sr * sr == (long long)x);
    }
    return false;
}

int main() {
   long long x = 2500;
    
    if (isPerfectSquare(x)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}