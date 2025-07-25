#include <stdio.h>

int main() {
    int M, a, b;
    int cups[4] = {0, 1, 0, 0};

    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        int temp = cups[a];
        cups[a] = cups[b];
        cups[b] = temp;
    }

    for (int i = 1; i <= 3; i++) {
        if (cups[i]) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}