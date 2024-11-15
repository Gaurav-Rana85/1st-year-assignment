#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "programming";
    char guessedWord[] = "_";
    int chances = 3;
    char guess;
    int correctGuess;

    while (chances > 0 && strcmp(word, guessedWord) != 0) {
        correctGuess = 0;
        printf("Current word: %s\n", guessedWord);
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                guessedWord[i] = guess;
                correctGuess = 1;
            }
        }

        if (!correctGuess) chances--;

        printf("Chances left: %d\n", chances);
    }

    if (strcmp(word, guessedWord) == 0)
        printf("You guessed the word! %s\n", guessedWord);
    else
        printf("You failed to guess the word. The word was: %s\n", word);

    return 0;
}