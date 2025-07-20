#include <stdio.h>
int main(){
    int a, b, c, d, e;
    int sum = 0;
    int p = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum  = a*a + b*b + c*c + d*d + e*e;
    p = sum % 10;
    printf("%d", p);
}