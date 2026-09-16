#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int rowSum[100];
    int i, j;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < rows; i++) {
        printf("%d", rowSum[i]);

        if (i < rows - 1)
            printf(" ");
    }

    return 0;
}
