#include <stdio.h>

int main(void){

    int number;
    printf("Type a number: ");
    scanf("%i", &number);
    if (number % 2 == 0) {
        printf("The number %i is even\n", number);
    }
    else {
        printf("The number %i is odd\n", number);
    }
}
