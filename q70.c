#include <stdio.h>

int main() {
    int n, arr[100], temp[100], k, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    // Rotate array to the right
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d", temp[i]);

        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
