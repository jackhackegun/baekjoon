#include <stdio.h>

int main() {
    int a, b, c = 0;
    int d[] = {500, 100, 50, 10, 5, 1};

    scanf("%d", &a);
    b = 1000 - a;

    for (int i = 0; i < 6; i++) {
        c += b / d[i];
        b %= d[i];
    }

    printf("%d\n", c);
    return 0;
}