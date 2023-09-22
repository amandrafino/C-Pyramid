#include <stdio.h>

int main() {
    int totalRows = 9; // Total rows in pyramid

    for (int i = 0; i < totalRows; i++) {
        for (int space = 0; space < totalRows - i - 1; space++) {
            printf(" ");
        }
        // Print '#' characters for the pyramid
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
