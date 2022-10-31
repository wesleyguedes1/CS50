#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    /*for (int i = 0; i < strlen(argv[1]); i ++) {
        printf("%c\n", argv[1][i]);
    }*/
    int ASCIILetters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122}; //not capital letters
    int ASCIICapitalLetters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    char plaintext[50];
    char ciphertext[50];
    printf("plaintext:");
    scanf("%[^\n]%*c",plaintext);
    int i = 0;
    do {
        //printf("Plaintext letters = %d\n", i);
        if(isalpha(plaintext[i])!= 0) {
            for(int j = 0; j < strlen(argv[1]); j++) {
                if(plaintext[i] == ASCIILetters[j]) {
                    printf("j = %i\n", j);

                    ciphertext[i] = tolower(argv[1][j]);
                    break;
                } else if (plaintext[i] == ASCIICapitalLetters[j]) {
                    ciphertext[i] = toupper(argv[1][j]);
                    break;
                }
            }
        }else if (isalpha(plaintext[i])== 0) {
            ciphertext[i] = plaintext[i];
        }
        i++;
        
    } while (plaintext[i]!='\0');
    if (plaintext[i]=='\0') {
        ciphertext[i] = '\0';
    }
    printf("%s\n",ciphertext);

}