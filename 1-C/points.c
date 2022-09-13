#include <stdio.h>
int main(void){

    int points;
    const int MYPOINTS;
    printf("How many points did you lose? ");
    scanf("%i", &points);
    if (points < MYPOINTS) {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MYPOINTS) {
        printf("You lost more points than me.\n");
    }
    else {
        printf("You lost the same amout of points than me.\n");
    }
}