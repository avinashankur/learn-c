#include <stdio.h>

int main() {
    float temp;
    printf("Enter temp: ");
    scanf("%f", &temp);
   
    float fahren = 0;
    fahren = 32+(9/5.0*temp);
    printf("%0.2fF", fahren);

    return 0;
}
