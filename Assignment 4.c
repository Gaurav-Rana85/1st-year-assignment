#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    srand(time(0));

    printf("Choose an option:\n1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &userChoice);

    computerChoice = (rand() % 3) + 1;

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    printf("Your choice: %d, Computer's choice: %d\n", userChoice, computerChoice);

    return 0;
}