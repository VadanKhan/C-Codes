#include <stdio.h>

int main () {
    int dayofweek = 5;
    switch (dayofweek) {
    case 1:
        printf("Ugh Mondays amirite");
        break;
    case 5:
        printf("I got that Friday Feelin'");
        break;
    case 6:
        printf("Saturday WOOOOOO");
        break;
    case 7:
        printf("'Tis a day of rest");
        break;
    default:
        printf("It is a day of the week, should be a peak work day.");
    }
    return 0;}
