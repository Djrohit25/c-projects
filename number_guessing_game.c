#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int guessed;
    int number_of_guesses;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    do
    {
        printf("Guess the number: \n");
        scanf("%d",&guessed);
        if(guessed>random_number)
        {
            printf("Lower number please");
        }
        else if(guessed<random_number)
        {
            printf("Higher number please");
        }
        else
            printf("congrats !!");
        number_of_guesses++;
    }while(guessed != random_number);
    printf("You guessed the number in %d guesses",number_of_guesses);

    return 0;
}
