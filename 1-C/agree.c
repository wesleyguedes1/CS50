#include <stdio.h>

int main(void) {
    char response;
    printf("Do you agree? ");
    scanf("%c", &response);
    if (response == 'y' || response == 'Y') {
        printf("Agreed.\n");
    } else if (response == 'n' || response == 'N'){
        printf("Not agreed.\n");
    }
}