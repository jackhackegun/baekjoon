#include <stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int e = a*b + c*d;
    printf("%d", e);
    return 0;
}