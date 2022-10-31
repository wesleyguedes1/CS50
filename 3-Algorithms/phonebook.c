#include <stdio.h>
#include <string.h>

int main(void) {

    char names [][10] = {"Carter", "David"};

    char numbers[][20] = {"+1-617-495-1000", "+1-949-468-2750"};

    for(int i = 0; i < 2; i++) {

        if (strcmp(names[i], "David") == 0) {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;


}