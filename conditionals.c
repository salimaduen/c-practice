#include <stdio.h>


int main() {

    /*
        C uses if/else conditionals as well as Switch case
    */

    int a = 1;

    // condition
    if (a > 1) {
        printf("a is greater than 1\n");
    } 
    // another condition
    else if (a == 1)  {
        printf("a is equal to 1\n");

    // else do this:
    } else {
        printf("a is less than 1\n");
    }

    // switch for values of a
    switch (a)
    {
    // case where a = 1
    case 1:
        printf("a is 1\n");
        break;
    
    // case where a = 2
    case 2:
        printf("a is 2\n");
        break;

    // Default case to any non specified input
    default:
        break;
    }

    return 0;
}