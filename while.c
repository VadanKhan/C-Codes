#include <stdio.h>

int main() {
    int count =5;
    while (count>0) {
        printf("%i\n", count);
        --count; //we could also write count = count - 1
    }


    int val = 3;
    // the do, while does the action first, then checks
    do {
        ++val;
        printf("Adjusted value is: %i\n", val);
    }
    while(val!=7);
    return 0;
    }
