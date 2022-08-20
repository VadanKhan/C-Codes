#include <stdio.h>

int main() {
    int array[] = {88, 66, 44, 22};
    array[3] = 33;
    //so to print this array out:
    int i;
    for (i=0; i<=3; i++) {
        printf("%i\n", array[i]);
    }
    //lettuce create an empty array:
    int empt[4];
    int j;
    for (j=0; j<=3; j++) {
        printf("%i\n", empt[i]);
    }
    return 0;
}

