#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char playerChoice, computerChoice;
    int randomNumber;

    // Seed the random number generator
    srand(time(0));

    // Display game instructions
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter your choice:\n");
    printf("'r' for Rock\n'p' for Paper\n's' for Scissors\n");
    printf("Your choice: ");
    scanf(" %c", &playerChoice);

    // Generate computer's choice
    randomNumber = rand() % 3; // Generates 0, 1, or 2
    if (randomNumber == 0)
        computerChoice = 'r';
    else if (randomNumber == 1)
        computerChoice = 'p';
    else
        computerChoice = 's';

    // Display computer's choice
    printf("Computer chose: ");
    if (computerChoice == 'r')
        printf("Rock\n");
    else if (computerChoice == 'p')
        printf("Paper\n");
    else
        printf("Scissors\n");

    // Determine the winner
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 'r' && computerChoice == 's') ||
               (playerChoice == 'p' && computerChoice == 'r') ||
               (playerChoice == 's' && computerChoice == 'p')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
