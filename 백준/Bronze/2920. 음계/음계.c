#include <stdio.h>

int main() {
    int a[8];
    int i;
    

    for(i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }


    if(a[0]==1 && a[1]==2 && a[2]==3 && a[3]==4 &&
       a[4]==5 && a[5]==6 && a[6]==7 && a[7]==8) {
        printf("ascending\n");
    }

    else if(a[0]==8 && a[1]==7 && a[2]==6 && a[3]==5 &&
            a[4]==4 && a[5]==3 && a[6]==2 && a[7]==1) {
        printf("descending\n");
    }

    else {
        printf("mixed\n");
    }

    return 0;
}
