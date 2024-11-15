#include<stdio.h>

int main() {
    int n = 5;

    for (int row = 0; row < n; row++) {
        
        for (int col = 0; col <= row; col++) {
            if (col % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        for (int space = 0; space < 2 * (n - row - 1); space++) {
            printf(" ");
        }

        for (int col = 0; col <= row; col++) {
            if (col % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
