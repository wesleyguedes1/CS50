#include <stdio.h>

int main(void){
    int n;
    
    do {
        printf("Size: ");
        scanf("%i", &n);
    }
    while(n < 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
}