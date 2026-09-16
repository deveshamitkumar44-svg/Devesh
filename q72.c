#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int i, j, sum = 0;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of all elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
