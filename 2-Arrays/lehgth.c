#include <stdio.h>
#include <string.h>
//the right way to write is "length"
int string_length(char s[10]);
int main(void) {
    char name[10];
    printf("Name: ");
    scanf("%s", name);
    int length = strlen(name);
    printf("%i\n", length);
}