#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[101];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long dp[10001] = {0};
    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        int coin = a[i];
        for (int j = coin; j <= k; j++) {
            dp[j] += dp[j - coin];
        }
    }

    printf("%lld\n", dp[k]);
    return 0;
}
