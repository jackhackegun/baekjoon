#include <stdio.h>
int main(){
    int a, b, c = 1;
    int d = 0;
    while(d != 2){
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b ==0 && c ==0){
            break;
        }
        if((a*a) == (b*b) + (c*c)){
        d += 1;
        }
        if((b*b) == (c*c) + (a*a)){
        d += 1;
        }
        if((c*c) == (b*b) + (a*a)){
            d += 1;
        }
        if(d >= 1){
            printf("right");
        }
        if(d < 1){
            printf("wrong");
        }
        printf("\n");
        d = 0;
    }
        
} 