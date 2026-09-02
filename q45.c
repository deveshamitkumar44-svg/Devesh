#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
