#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");

    random = rand() % 101; // Generating between 0 to 100 (inclusive)

    do {
        printf("\nPlease enter your Guess between (1 to 100)\n");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random) {
            printf("** Guess a larger number Please.\n");
        } else if (guess > random) {
            printf("** Guess a smaller number Please.\n");
        } else if (guess == random) {
            printf("\nCongratulations!!! You have successfully guessed the number in %d attempts\n", no_of_guess);
        }

    } while (guess != random);

    printf("Bye(^-^) Bye, Thanks for Playing.\n");
    printf("Developed By : Ayush\n");

    return 0;
}
