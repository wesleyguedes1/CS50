#include <stdio.h>

int main(void){

    int x;
    int y;

    printf("x: ");
    scanf("%i", &x);

    printf("y: ");
    scanf("%i", &y);

    float z = (float)x / (float)y;
    printf("%.2f\n", z);
}
