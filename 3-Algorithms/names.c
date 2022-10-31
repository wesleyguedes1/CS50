#include <stdio.h>
#include <string.h>

int main(void) {

    char names[][17] = {"Bill", "Charlie", "Fred", "Georce", "Ginny", "Percy", "Ron"};

    for(int i = 0; i < 7; i++) {
        if(strcmp(names[i], "Bill") == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;



}