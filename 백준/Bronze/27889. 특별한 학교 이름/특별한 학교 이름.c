#include <stdio.h>
#include <string.h>

int main() {
    char abbr[10];
    scanf("%s", abbr);

    if (strcmp(abbr, "NLCS") == 0)
        printf("North London Collegiate School\n");
    else if (strcmp(abbr, "BHA") == 0)
        printf("Branksome Hall Asia\n");
    else if (strcmp(abbr, "KIS") == 0)
        printf("Korea International School\n");
    else if (strcmp(abbr, "SJA") == 0)
        printf("St. Johnsbury Academy\n");

    return 0;
}
