#include <stdio.h>
int main() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'a' && c <= 'z')
            putchar(c - 'a' + 'A');
        else if (c >= 'A' && c <= 'Z')
            putchar(c - 'A' + 'a');
        else
            putchar(c);
    }
    return 0;
}
