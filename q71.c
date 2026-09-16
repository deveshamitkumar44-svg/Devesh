#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int i, j;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);

            if (j < cols - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
