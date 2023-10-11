#include <stdio.h>

// Function signature
void modify_ptr(int*);

int main() {
    /*
        A pointer is a variable that stores the memory address of another variable.
        We use * and & for operations related to pointers and addresses
    */

    // int variable a
    int a = 2;


    // we declare a pointer by using * operator
    // Suppose variable a is stored in memory address 0x04
    // then ptrA will store that address
    int* ptrA = &a;

    // we can dereference it by using the * operator
    printf("Value stored in ptrA: %d\n", *ptrA);

    // If we make any changes to the value stored in the pointer
    // It will also be reflected in the variable:

    *ptrA = 10;

    // Same values
    printf("Value in a: %d\n", a);
    printf("Value in ptrA: %d\n", *ptrA);

    // Any change to the variable will also be reflected on the pointer

    a = 22;
    // Same values again
    printf("Value in a: %d\n", a);
    printf("Value in ptrA: %d\n", *ptrA);


    // If pass a pointer to a function it will still do the same
    modify_ptr(ptrA);
    printf("Value in a: %d\n", a);

    // You can also directly pass the variable's address without creating a pointer variable
    modify_ptr(&a);
    // Same outcome
    printf("Value in a: %d\n", a);

    return 0;
}


void modify_ptr(int* ptr) {
    // IF we change a pointer's value here, same outcome will happen
    // Because it is pointing to the same address in memory
    // And any modification you do, will be to that address.

    // Parentheses are for order. You first dereference it, then modify it.
    (*ptr)++;
}