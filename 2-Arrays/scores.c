#include <stdio.h>

    int main(void) {

        int scoreQuant;
        printf("How many scores? ");
        scanf("%i", &scoreQuant);
        float scores[scoreQuant];
        float scoreTotal;
        for(int i = 0; i < scoreQuant; i++) {
            printf("Score: ");
            scanf("%f", &scores[i]);
            scoreTotal+=scores[i];
        }

        printf("Average: %.2f\n", (scoreTotal / scoreQuant));
    }