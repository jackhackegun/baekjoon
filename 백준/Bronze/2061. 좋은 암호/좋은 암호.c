#include <stdio.h>
#include <string.h>

#define MAX_L 1000000

char K[105];
int L;

// 문자열 K를 정수 d로 나눈 나머지 계산
int mod(char *K, int d) {
    int r = 0;
    for (int i = 0; K[i]; i++) {
        r = (r * 10 + (K[i] - '0')) % d;
    }
    return r;
}

int is_prime[MAX_L + 1];

void sieve() {
    for (int i = 2; i <= MAX_L; i++) {
        is_prime[i] = 1;
    }
    for (int i = 2; i * i <= MAX_L; i++) {
        if (is_prime[i]) {
            for (int j = i * 2; j <= MAX_L; j += i) {
                is_prime[j] = 0;
            }
        }
    }
}

int main() {
    scanf("%s %d", K, &L);

    sieve();

    for (int i = 2; i < L; i++) {
        if (is_prime[i] && mod(K, i) == 0) {
            printf("BAD %d\n", i);
            return 0;
        }
    }

    printf("GOOD\n");
    return 0;
}
