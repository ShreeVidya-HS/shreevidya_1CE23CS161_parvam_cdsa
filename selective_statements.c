#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;

    // Seed the random number generator
    srand(time(NULL));

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Choose an option:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &playerChoice);
    computerChoice = (rand() % 3) + 1;
    printf("You chose: ");
    switch(playerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
        default: printf("Invalid choice!\n"); return 1;
    }

    printf("Computer chose: ");
    switch(computerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

