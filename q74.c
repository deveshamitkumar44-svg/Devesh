#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int transpose[100][100];
    int i, j;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d", transpose[i][j]);

            if (j < rows - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
