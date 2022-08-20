#include <stdio.h>

int main() {
    int time = 18;
    if (time<12 && time>0){
        printf("Good Morning");
    } else if (time<=18 && time>=12) {
        printf("Good Afternoon");
    } else if (time<=24 && time>18) {
        printf("Good Evening");
    } else {
        printf("Please enter Hours in 0-24 Hrs time");
    }
    int nat = 24;
    (nat==24) ? printf("\nThats actually not possible btw") : printf("\nthat works");
    return 0;}
