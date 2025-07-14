#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d", &a); //472
    scanf("%d", &b); //385
    c = b;
    while(b > 0){
        printf("%d\n", a*(b%10));
        b/=10;
    }
    printf("%d", a * c);
    return 0;
}