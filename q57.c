#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Print sum
    printf("%d", sum);

    return 0;
}
