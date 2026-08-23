#include <stdio.h>

int main() {
    // Input 1: 4 2 +
    int a1 = 4, b1 = 2;
    char op1 = '+';

    // Input 2: 10 3 %
    int a2 = 10, b2 = 3;
    char op2 = '%';

    // Input 3: 15 5 /
    int a3 = 15, b3 = 5;
    char op3 = '/';

    switch (op1) {
        case '+':
            printf("%d\n", a1 + b1);
            break;
        case '-':
            printf("%d\n", a1 - b1);
            break;
        case '*':
            printf("%d\n", a1 * b1);
            break;
        case '/':
            printf("%d\n", a1 / b1);
            break;
        case '%':
            printf("%d\n", a1 % b1);
            break;
    }

    switch (op2) {
        case '+':
            printf("%d\n", a2 + b2);
            break;
        case '-':
            printf("%d\n", a2 - b2);
            break;
        case '*':
            printf("%d\n", a2 * b2);
            break;
        case '/':
            printf("%d\n", a2 / b2);
            break;
        case '%':
            printf("%d\n", a2 % b2);
            break;
    }

    switch (op3) {
        case '+':
            printf("%d\n", a3 + b3);
            break;
        case '-':
            printf("%d\n", a3 - b3);
            break;
        case '*':
            printf("%d\n", a3 * b3);
            break;
        case '/':
            printf("%d\n", a3 / b3);
            break;
        case '%':
            printf("%d\n", a3 % b3);
            break;
    }

    return 0;
}
