#include <stdio.h>

float discount(float price, int percentage) {
    return price * (100 - percentage) / 100;
}
int main(void) {

    float regularPrice;
    int percentOff;
    printf("Regular price: ");
    scanf("%f", &regularPrice);
    printf("Percent off: ");
    scanf("%i", &percentOff);
    float sale = discount(regularPrice, percentOff);
    printf("Sale price: %.2f\n", sale);
}