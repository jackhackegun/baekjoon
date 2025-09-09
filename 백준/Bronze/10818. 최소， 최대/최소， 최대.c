#include <stdio.h>
int op(int k, int c[]){
    int max = c[0];
    int min = c[0];
    for(int o = 1; o < k; o++){
        if(max < c[o]){
            max = c[o];
        }
        if(min > c[o]){
            min = c[o];
        }
    }
    printf("%d %d", min, max);
    return 0;
}

int main() {
    int a;
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    op(a, b);
    return 0;
}
