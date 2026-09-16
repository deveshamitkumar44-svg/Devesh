#include <stdio.h>

int main() {
    int n, arr[100];
    int largest, secondLargest, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];

    // Find largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find first element smaller than largest
    for (i = 0; i < n; i++) {
        if (arr[i] < largest) {
            secondLargest = arr[i];
            break;
        }
    }

    // Find second largest element
    for (i = 0; i < n; i++) {
        if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
