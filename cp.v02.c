#include <stdio.h>

void buildRightToLeftPyramid() {
    int totalRows = 9;

    for (int i = 0; i < totalRows; i++) {
        for (int space = 0; space < totalRows - i - 1; space++) {
           printf(" "); 
        }
        // print '#' characters for the pyramid
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
