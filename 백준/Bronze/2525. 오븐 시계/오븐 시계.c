#include <stdio.h>
int main() {
    int h, m, d;
    scanf("%d %d", &h, &m);
    scanf("%d", &d);

    m += d;
    h = (h + m / 60) % 24;
    m %= 60;

    printf("%d %d\n", h, m);
    return 0;
}