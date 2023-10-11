#include <stdio.h>

int main() {

    /*
        In C there are 6 different bitwise operators:
        &       - AND
        |       - OR
        ^       - XOR (exclusive OR)
        ~       - NOT or TWO'S COMPLIMENT
        <<      - SHIFT LEFT
        >>      - SHIFT RIGHT
    
        These operators manipulate the binaries directly
    */


    // Since they are 2-4 bytes they will have leading zeroes
    // In the case of 4 bytes there should be a total of 32 bits

    int a = 6; // 0110
    int b = 7; // 0111

    /*
        a & b =
        0110
        0111
        ----
        0110 -> 6
    */

    // Output is 6
    printf("a AND b: %d\n", (a&b));


    /*
        a | b =
        0110
        0111
        ----
        0111 -> 7
    */

    printf("a OR b: %d\n", (a|b));

    /*
        a ^ b =
        0110
        0111
        ----
        0001 -> 1
    */

    printf("a XOR b: %d\n", (a^b));

    /*
        Not is a little more complicated, all leading zeroes need to be taken into account
        supposing an int is 4 bytes:

        ~ a =
        0000 0000 0000 0000 0000 0000 0000 0110
        ---------------------------------------
        1111 1111 1111 1111 1111 1111 1111 1001 

        This can represent two things:
        - Negative TWO's compliment
        - A positive UNSIGNED number
    */
    // negative two's compliment value
    printf("NOT a %d\n", (~a));
    // unsigned value
    printf("NOT a (UNSIGNED): %u\n", ~a);


    /*
        SHIFTING to the left will move bits to the left x amount of times and add zeroes to the right side:

        a << 2 =
        0000 0000 0000 0000 0000 0000 0000 0110 -> 6
        ---------------------------------------
        0000 0000 0000 0000 0000 0000 0001 1000 -> 24

        This is equivalent to multiplying your number by 2^shifts

        so -> 6 * 2^2 (The power being 2 shifts to the left)
        = 6 * 4 = 24
    */

    printf("a shifted 2 bits to the left: %d\n", (a<<2));


    /*
        SHIFTING to the right will move bits to the right x amount of times and add zeroes to the left side:

        a << 2 =
        0000 0000 0000 0000 0000 0000 0000 0110 -> 6
        ---------------------------------------
        0000 0000 0000 0000 0000 0000 0000 0001 -> 1

        This is equivalent to dividing your number by 2^shifts

        so -> 6 / 2^2 (The power being 2 shifts to the right)
        = 6 / 4 = 1.5 FLOOR = 1
    */

    printf("a shifted 2 bits to the right: %d\n", (a>>2));

    return 0;
}