#include <stdio.h>
#define PI 3.1415926

float myfunc(float r) {
    float a;
    a = 2 * PI * r;
    return (a);
}

int main() {
    float radius, circum;
    float myfunc(float radius);
    printf("Radius: ");
    scanf("%f", &radius);
    circum = myfunc(radius);
    printf("Circumference is %f\n", circum);
}
