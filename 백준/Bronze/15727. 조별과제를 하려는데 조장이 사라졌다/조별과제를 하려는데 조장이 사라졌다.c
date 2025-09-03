#include <stdio.h>

int main(void) {
    int L;
    if (scanf("%d", &L) != 1) return 0;
    printf("%d\n", (L + 4) / 5);
    return 0;
}
