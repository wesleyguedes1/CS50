#include <stdio.h>
#include <math.h>
//couldn't compile becausa of math.h
int main(void) {
    float amount;
    printf("Dollar amount: ");
    scanf("%f", &amount);
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}