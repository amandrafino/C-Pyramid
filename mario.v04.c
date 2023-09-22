#include <stdio.h>

int prompt() {
   int totalRows;
   printf("Enter number of rows (height) of pyramid (1 - 9): ");
   scanf("%d", &totalRows);
   return totalRows;
}

void buildLeftToRightPyramid(int totalRows) {
    for (int i = 0; i < totalRows; i++) {
        // Print spaces before the '#' characters
        for (int space = 0; space <= totalRows - i -1; space++) {
            printf(" ");
        }
    
        // Print '#' characters for the pyramid
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int pyramidRows= prompt(); // Call prompt func get number of rows
    buildLeftToRightPyramid(pyramidRows);
    return 0;
}
