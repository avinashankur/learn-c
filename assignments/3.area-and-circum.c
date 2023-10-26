#include <stdio.h>
#define PI 3.1415926

float myfunc(float r) {  
float a;
a=2*PI*r;
return(a);
}

float myfunc1(float r) {
float s;
s=PI*r*r;
return(s);
}

int main() {
    float radius, circum, area;
    float myfunc(float radius);
    printf("Radius: ");
    scanf("%f", &radius);
    circum = myfunc(radius);
    area = myfunc1(radius);
    printf("Circumference is %f. \n", circum);
    printf("Area is %f. \n", area);
}
