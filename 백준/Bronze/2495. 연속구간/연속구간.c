#include <stdio.h>
#include <string.h>

int main() {
    char num[9];
    for (int i = 0; i < 3; i++) {
        scanf("%s", num);
        int max_len = 1, cur_len = 1;
        for (int j = 1; j < 8; j++) {
            if (num[j] == num[j-1]) {
                cur_len++;
                if (cur_len > max_len) max_len = cur_len;
            } else {
                cur_len = 1;
            }
        }
        printf("%d\n", max_len);
    }
    return 0;
}