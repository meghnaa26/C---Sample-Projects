#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
int main() {
    
    srand(time(0));
    
    char play_again[4] = "yes";
    
    while (strcmp(play_again, "yes") == 0) {
        int random_number = rand() % 100 +1;
        int guess_number;
        int attempts = 0;
        bool guess = false;
        
        while (!guess) {
            printf("Enter a number between 1-100: ");
            scanf("%d", &guess_number);
            attempts++;
            if(guess_number == random_number) {
                printf("You guessed the correct number!\n");
                guess = true;
                break;
            } else if (guess_number < random_number) {
                printf("Too low\n");
            } else {
                printf("Too high\n");
            }
        }
        printf("you got in %d attempts!\n", attempts);
        printf("Do you want to play again: ");
        scanf(" %3s",play_again);
    }
    
    printf("Thanks for playing\n");
    
    return 0;
}
