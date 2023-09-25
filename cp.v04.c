#include <stdio.h>

int prompt() {
    int totalRows;
    printf("Enter number of rows for pyramid height (1 - 9): ");
    scanf("%d", &totalRows);
    return totalRows;
}

void buildLeftToRightPyramid(int totalRows) {
    for (int i = 0; i < totalRows; i++) {
        for (int space = 0; space <= totalRows - i - 1; space++) {
            printf(" ");
        }
        // Print "#" characters for pyramid
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int pyramidRows = prompt(); // 
    buildLeftToRightPyramid(pyramidRows);
    return 0;
}
        
