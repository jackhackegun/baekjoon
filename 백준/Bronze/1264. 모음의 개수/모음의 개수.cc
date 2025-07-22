#include <stdio.h>
#include <ctype.h>

int main() {
    char line[1024];
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '#') break;
        int count = 0;
        for (int i = 0; line[i]; i++) {
            char c = tolower(line[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}