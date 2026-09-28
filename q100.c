#include <stdio.h>

int main() {
    char s[100];
    int i, j, k;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i; s[j] != '\0'; j++) {
            for (k = i; k <= j; k++)
                printf("%c", s[k]);
            if (s[j + 1] != '\0' || s[i + 1] != '\0')
                printf(",");
        }
    }

    return 0;
}
