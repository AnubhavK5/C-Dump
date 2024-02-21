#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, c = 1, guess;
    // for a random number
    srand(time(0));
    num = rand()% 100 + 1;
    // printf("%d\n", num);
    do{
        printf("Guess the number:");
        scanf("%d", &guess);
        if (guess>num)   printf("Lower!!!\n");
        else if (guess<num)   printf("Higher!!!\n");
        else{
            printf("You guessed in %d times.\n", c);
        }
        c++;
    }while(guess!=num);
}

