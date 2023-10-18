#include <stdio.h>
#define PI 3.1415926

float myfunc(float r) {  
float a;
a=PI*r*r;
return(a);
}

int main() {
    float radius, area;
    float myfunc(float radius);
    printf("Radius: ");
    scanf("%f", &radius);
    area = myfunc(radius);
    printf("Area is %f\n", area);
}
