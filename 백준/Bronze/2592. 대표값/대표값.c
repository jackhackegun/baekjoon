#include <stdio.h>

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    int b = 0;
    for (int i = 0; i < 10; i++) {
        b += a[i];
    }
    int c = b / 10;
    printf("%d\n", c);
    int d = 0, e = a[0];
    for (int i = 0; i < 10; i++) {
        int f = 0;
        for (int j = 0; j < 10; j++) {
            if (a[j] == a[i]) f++;
        }
        if (f > d) {
            d = f;
            e = a[i];
        }
    }
    printf("%d\n", e);
    return 0;
}