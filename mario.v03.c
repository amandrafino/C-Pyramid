#include <stdio.h>

void buildRightToLeftPyramid() {
    int totalRows;
    printf("Enter the number of rows (height) of your pyramid (1 - 9): ");
    scanf("%d", &totalRows);

    for (int i = 0; i < totalRows; i++) {
        for (int spacers = 0; spacers < totalRows -i -1; spacers++) {
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
    buildRightToLeftPyramid();
    return 0;
}
