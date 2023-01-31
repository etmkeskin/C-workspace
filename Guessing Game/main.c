#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 5;
    int guess;
    int count = 3;
    while(guess != 5 && count != 0){
        if(count > 1){
            printf("Enter a number to guess the secret number in %d guesses: ", count);
            scanf("%d", &guess);
            if(guess == secretNum){
                printf("Great!! You found the secret number '%d'.\n", secretNum);
                break;
            }
        }
        else{
            printf("Last guess: ");
            scanf("%d", &guess);
            if(guess == secretNum){
                printf("Great!! You found the secret number '%d'.\n", secretNum);
                break;
            }
            else{
                printf("You could not find the secret number :( \n");
            }

        }
        count--;
    }



    return 0;
}
