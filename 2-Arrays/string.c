#include <stdio.h>
#include <string.h>

int main(void) {

    char string[10];
    printf("Input:  ");
    scanf("%s", string);
    int length = strlen(string);
    printf("Output: ");
    for (int i = 0; i < length; i++) {
        printf("%c", string[i]);
    }
    printf("\n");
}