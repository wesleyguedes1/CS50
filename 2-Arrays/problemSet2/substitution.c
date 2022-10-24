#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    /*for (int i = 0; i < strlen(argv[1]); i ++) {
        printf("%c\n", argv[1][i]);
    }*/
    int ASCIILetters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 116, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122}; //not capital letters
    int ASCIICapitalLetters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    char plaintext[50];
    char ciphertext[50];
    printf("plaintext:");
    scanf("%[^\n]%*c",plaintext);

    for (int i = 0; plaintext[i] != '\0'; i++) {
        if(isalpha(plaintext[i])!= 0) {
            for(int j = 0; j < strlen(argv[1]); j++) {
                if(plaintext[i] == ASCIILetters[j]) {
                    ciphertext[i] = argv[1][j];
                }
            }
        }
        
    }
    printf("%s\n", ciphertext);

}