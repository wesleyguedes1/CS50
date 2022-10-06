#include <stdio.h>
#include <ctype.h>
#include <string.h>
//thinking about using ASCII in some way
//you'll probably use "strlen()"
//might have to use toupper() or tolower()
//https://manual.cs50.io/ for helpful funcions
int compute_score();
int main(void) {
    char word1[15];
    char word2[15];
    printf("Player 1:");
    scanf("%s", word1);
    printf("Player 2:");
    scanf("%s", word2);
    int player1Score = compute_score(word1);
    int player2Score = compute_score(word2);
    if (player1Score > player2Score) {
        printf("Player 1 Wins!\n");
    } else if (player2Score > player1Score) {
        printf("Player 2 Wins!\n");
    } else {
        printf("Tie!\n");
    }
}

int compute_score(char word[20]){
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int ASCIILetters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 116, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
    //trick to get the length of an array, you get the size of the array and divide by the size of one element, this works because each element has the same size
    int alphabetLength = sizeof(points) / sizeof(points[0]);
    int wordPoint = 0;
    int j = 0;
    //for each letter in the word
    for (int i = 0; i <strlen(word); i++) {
        j = 0;
        int letterInASCII = tolower(word[i]);
        //get individual letter and compares with the letter ASCII equivalent
        do {
            if (letterInASCII==ASCIILetters[j]) {
                //printf("%c, %i\n", word[i], ASCIILetters[j]);
                wordPoint+=points[j];
                //printf("points : %i\n", wordPoint);
                j++;
            } else {
                j++;
            }
        } while(j <= alphabetLength);
        
    }
    return wordPoint;
}