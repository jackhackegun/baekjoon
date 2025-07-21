#include <stdio.h>

int main() {
    int n, min = 1000001, max = 1, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < min) min = a;
        if (a > max) max = a;
    }
    printf("%d\n", min * max);
    return 0;
}