#include <stdio.h>

/*while condition be the algorithm  to have a result?
can't be a while(true) loop because gambiarra, i wanna try other options first
credit cards can have different number of digits
*/
int main(void) {
    long number;
    
    int digitCounter = 0;
    long counter = 10;
    int result;
    int sum1 = 0;
    int sum2 = 0;
    int multiplier;
    printf("Number: ");
    scanf("%li", &number);
    printf("numero:%li\n", number);
    do {
        if(digitCounter%2 ==0) {
            result = number%counter;
            sum1+=result;
            number = (number - result);
            number = number / counter;
            digitCounter++;
        } else {
            result = number%counter;
            // trying to multiply by 2, if result>= 10, "split" the number because i need to get both digits individualy        
            multiplier = result * 2;
            if(multiplier >=10) {
                sum2+=multiplier - 10;
                sum2+=1;
            } else {
                sum2+=multiplier;
            }
            number = (number - result);
            number = number / counter;
            digitCounter++;
        }
        
    } while(number!=0);
    result = sum1 + sum2;
    printf("checksum result: %i\n", result);
    if (result%10 ==0) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }
    printf("digit counter = %i\n", digitCounter);   
}