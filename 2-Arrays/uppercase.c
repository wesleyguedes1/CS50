#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void) {
    char string[10];
    printf("Before: ");
    scanf("%s", string);
    printf("After: ");
    int n = strlen(string);
    for(int i = 0; i < n; i++) {
        printf("%c", toupper(string[i]));
    }
    printf("\n");
}