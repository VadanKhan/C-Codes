#include <stdio.h>

int main() {
    int nat1 = 3;
    int nat2 = 3;
    int sum = nat1 + nat2;
    printf("%i\n", sum);
    nat2 *= 3;
    nat1 = ++nat1;
    int rem = nat2 % nat1;
    printf("%i, %i, %i\n", nat2, nat1, rem);
    int comp = nat1 > nat2; //as the true or false is stored as a 1 or 0, you can declare an int variable for the result
    printf("%i\n", comp);
    printf("%i, %i\n", nat1>nat2, nat1==nat2);
    printf("%i\n", !(nat1>nat2 || nat1==nat2));

    //we can also note the size of stuff, including empty variables using the %lu specifier
    printf("%i\n", sizeof(nat1));
    double emptystr;
    printf("%lu\n", sizeof(emptystr));

    return 0;}
