#include <stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Print first array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Print second array
    for (int i = 0; i < m; i++) {
        printf("%d", b[i]);
        if (i < m - 1)
            printf(" ");
    }

    return 0;
}

