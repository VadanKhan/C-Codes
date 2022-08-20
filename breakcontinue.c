#include <stdio.h>

int main () {
    int i; //can just create an empty variable like this ofc
    for (i=0; i<=10; ++i) {
        if (i==4) {
            break;
        }
        printf("%i\n", i);
    }
    for (i=0; i<=10; ++i) {
        if (i==4) {
            continue;
        }
        printf("%i\n", i);
    }
    i=10; //resetting
    while (i>0) {
        if (i==5) {
            --i;
            continue;
        }
        printf("%i\n", i);
        i--;
    }
    return 0;}
