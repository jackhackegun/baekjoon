#include <stdio.h>

int main(void) {
    const int MOD = 20000303;
    long long res = 0;
    int ch, seen = 0;

    while ((ch = getchar()) != EOF) {
        if ('0' <= ch && ch <= '9') {
            seen = 1;
            res = (res * 10 + (ch - '0')) % MOD;
        } else if (seen) {
            break;
        }
    }
    printf("%lld\n", res);
    return 0;
}
