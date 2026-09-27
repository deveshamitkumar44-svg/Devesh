#include <stdio.h>

int main() {
    char name[100];
    int i, start = 0;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[start]);
            start = i + 1;
        }
    }

    printf(" ");
    
    for (i = start; name[i] != '\0' && name[i] != '\n'; i++)
        printf("%c", name[i]);

    return 0;
}
