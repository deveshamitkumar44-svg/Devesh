#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 1, middle, result;

    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }

    first = temp;

    middle = (num % digits) / 10;

    result = last * digits + middle * 10 + first;

    printf("%d", result);

    return 0;
}
