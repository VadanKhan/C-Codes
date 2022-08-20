#include <stdio.h>

//to create a variable, you must specify the type for the first time, this is known as declaration
int main() {
    int nat = 15;
    float dec=15.1;
    char let='k';

//can ofc reassign
    nat = 10;

/*in C, (unlike more developed languages like C++) you must specify the type of data of data you are using for your function
This then means that the stuff that needs to be in quotes will go with the specifier*/
    printf("%d", nat); //no, idk why you can use d here either
    printf("\n%i", nat); //as you can see the order of the quoted stuff causes the order of execution
    printf("\n%f", dec);
    printf("\n%c", let);
    printf("\nI will put my number here: %i, and my letter here: %c", nat, let);
    //the quoted stuff is what is printed, the variables are there afterwards to be input in place of the variable types

    //can declare multiple variables by comma separating a list
    int x=1, y=2, z=3;
    printf("\n%i", x+y+z);
    printf("\n%i, %i, %i", x, y, z);
    //can also declare them afterwards
    int l, m, n;
    l=1, m=2, n=3;
    printf("\n%i, %i, %i", l, m, n);
    //can also declare that they have the same value with mutual equal signs
    int a, b, c;
    a=b=c=4;
    printf("\n%i, %i, %i", a, b, c);

    return 0; }



