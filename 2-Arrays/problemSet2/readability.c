#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//count words using "space" ASCII code (use punctuation ASCII code to count the last word of a sentence)
//count sentences using punctuation ASCII code
//strlen() only counts the length of a word, it would not work fow a whole text
//count/locate letters > words > sentences
int count_letters(char text[500]);
int count_words(char text[500]);
int count_sentences(char text[500]);
int main(void) {
    char text[500];
    printf("Text:");
    //explanation on this >>> https://www.youtube.com/watch?v=f8589Y9LHHg
    scanf("%[^\n]%*c", text);
    //fgets(text, 500, stdin);
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    printf("Letter quantity: %i\n", letters);
    printf("Word quantity: %i\n", words);
    printf("Sentences quantity: %i\n", sentences);
    //typecasting got kinda ugly, maybe fix later?
    float lettersPer100Words = ((float)count_letters(text)/(float)count_words(text)) * 100;
    float sentencesPer100Words = ((float)count_sentences(text) /(float) count_words(text)) * 100;
    float CLIndex = (0.0588 * lettersPer100Words) - (0.296 * sentencesPer100Words) - 15.8;

    printf("CL Index = %i\n", (int) round(CLIndex));




}
int count_letters(char text[500]) {

    int i = 0, letterQuant = 0;
        while(text[i]!='\0') {
            if(isalpha(text[i])!= 0) {
                letterQuant++;
            }
            i++;
        }
        return letterQuant;
    }
//TEST check if is space/dot> then check if [i-1] are letters?
int count_words(char text[500]) {
    int i = 0, wordQuant = 0;
    while(text[i]!='\0'){
        if(isspace(text[i])!= 0 && isalpha(text[i-1])!= 0){
            wordQuant++;
        }
        //idea: make an array with all the "." "!" symbols and check if text[i] is in the array
        //may have problem with "'" symbol
        //problem with "-" symbol
        //special cases with punctuation
        else if ((text[i] == 33 || text[i]== 46 || text[i] == 63) && isalpha(text[i-1])!=0){
            wordQuant++;
        //special cases with colon/semi-colon/comma
        }else if ((text[i] == 44 || text[i]== 58 || text[i] == 59) && isalpha(text[i -1]) != 0) {
            wordQuant++;
        }
        i++;
    }
    if (text[i] == '\0' && isalpha(text[i-1])!= 0) {
        wordQuant++;
    }
    return wordQuant;
}

int count_sentences(char text[500]) {
    int i = 0, sentenceQuant = 0;
    while(text[i]!= '\0') {

        if(text[i] == 33 || text[i]== 46 || text[i] == 63) {
            sentenceQuant++;
        }
        i++;

    }
    return sentenceQuant;
}