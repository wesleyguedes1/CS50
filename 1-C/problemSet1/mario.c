#include <stdio.h>

int main(void) {

    int height;
    printf("Height: ");
    scanf("%i", &height);
    //number of rows
    for(int i = 0; i <=height; i++) {
        //print the spaces
        for(int j = height; j > i; j--) {
            printf(" ");
        }
        //print the left side hashes
        for (int k = 0; k < i; k++) {
                printf("#");
            }
        //space between blocks
        printf("  ");
        //right side hashes
        for(int l = 0; l < i; l++) {
            printf("#");
        }
        printf("\n");
    }

}