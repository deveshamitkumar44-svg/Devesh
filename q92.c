#include <stdio.h>

int main() {
    char s[100];
    int count[26] = {0}, i;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;

        if (count[s[i] - 'a'] == 2) {
            printf("%c", s[i]);
            break;
        }
    }

    return 0;
}
