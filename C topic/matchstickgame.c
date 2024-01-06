#include <stdio.h>

int main() {
    int matchsticks = 21;
    int player_choice, computer_choice;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: There are 21 matchsticks. You can pick 1, 2, 3, or 4 matchsticks.\n");
    printf("The player who is forced to pick up the last matchstick loses.\n");

    while (matchsticks > 1) {
        // Player's turn
        printf("\nRemaining matchsticks: %d\n", matchsticks);
        printf("Your turn. Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &player_choice);

        if (player_choice < 1 || player_choice > 4 || player_choice > matchsticks) {
            printf("Invalid choice. Please pick a valid number of matchsticks.\n");
            continue;
        }

        matchsticks -= player_choice;
        printf("You picked %d matchsticks.\n", player_choice);

        // Computer's turn
        computer_choice = 5 - player_choice; // The computer always wins
        printf("Computer picks %d matchsticks.\n", computer_choice);
        matchsticks -= computer_choice;
    }

    // Determine the winner
    if (matchsticks == 1) {
        printf("\nYou are forced to pick up the last matchstick. You lose!\n");
    } else {
        printf("\nThe computer is forced to pick up the last matchstick. You win!\n");
    }

    return 0;
}
