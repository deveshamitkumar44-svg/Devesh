#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};

    scanf("%lld", &n);

    if (n == 0) {
        freq[0] = 1;
    }

    while (n > 0) {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int max = 0;
    int result = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
