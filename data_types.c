#include <stdio.h> // Standard input output library
#include <string.h> // String Library

int main() {

    /*
        FORMAT SPECIFIERS
        %c	                        - Character
        %d	                        - Signed integer
        %e or %E                    - Scientific notation of floats
        %f                          - Float values
        %g or %G                    - Similar as %e or %E
        %hi	                        - Signed integer (short)
        %hu	                        - Unsigned Integer (short)
        %u or %i                    - Unsigned integer
        %l or %ld or %li            - Long
        %lf                         - Double
        %Lf                         - Long double (upper case L)
        %lu                         - Unsigned int or unsigned long
        %lli or %lld                - Long long
        %llu                        - Unsigned long long
        %o                          - Octal representation
        %p                          - Pointer
        %s                          - String
        %u                          - Unsigned int
        %x or %X                    - Hexadecimal representation
        %n                          - Prints nothing
        %%                          - Prints % character
    
    */

    /*
        printf(const char *format, ...) - prints to standard output
    */

    // BASIC DATA TYPES IN C

    //  Short data type - smaller int of size 2 bytes | -32,768 to 32,767
    short sh = 1;
    printf("SHORT INT: %hi\n", sh);

    // Integer data type - size 2 or 4 bytes (depends on system) | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    int i = 1;
    printf("INT: %d\n", i);

    // Long data type - bigger int size at least 4 bytes up to 8 bytes | -9223372036854775808 to 9223372036854775807 (L suffix to help differentiate)
    long int l = 100000L;
    printf("LONG INT: %ld\n", l);

    // Long Long data type - At least 8 byte size integer 
    long long int ll = 1000000L;
    printf("LONG LONG INT: %lld\n", ll);

    // Float data type - size 4 bytes | 6 decimal places of accuracy (f suffix to specify it is float)
    float f = 0.000001f;
    printf("FLOAT: %f\n", f);

    // Double data type - size 8 bytes | 15 decimal places of accuracy
    double d = 0.000000000000001;
    printf("DOUBLE: %.15lf\n", d);

    // Long Double data type - size 10 bytes | 19 decimal places of accuracy
    long double ld = 0.0000000000000000001;
    printf("LONG DOUBLE: %.19Lf\n", ld);

    // Chat data tyoe - size 1 byte | -128 to 127 or 0 to 255
    char c = 'A';
    printf("CHAR: %c\n", c);

    // They all have unsigned counterparts that do not include negative values


    /*
        TYPEDEF VARIABLES - they allow you to define your own types using existing ones.
        typedef [type] [name];
    */
        typedef unsigned int DWORD;

        // DWORD == Unsigned Int
        DWORD a = 4327;

        // You still use the format specifier for the original data type:
        printf("DWORD: %u\n", a);

        printf("SIZEOF(DWORD) %d == SIZEOF(UNSIGNED INT) %d\n", sizeof(DWORD), sizeof(unsigned int));


    return 0; // Main function returns 0
}