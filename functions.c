#include <stdio.h>


/*
    There are two ways of declaring functions in C:

    First you write them all before main function and just call them,

    Second and prefered one is to write functions after main and write their signatures before main

*/


// For the signatures you write the return type, name of function and its parameters

// return - name - parameters
int add_numbers(int a, int b);


int main() {

    // call function add_numbers and store int in result
    int result = add_numbers(3, 2);
    printf("%d\n", result);


    return 0;
}


/*
    function_name - add_numbers
    paramaters - int a, int b (two numbers)
    returns - int
*/

int add_numbers(int a, int b) {
    return a + b;
}