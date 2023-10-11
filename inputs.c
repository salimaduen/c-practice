#include <stdio.h> // Standard input/output library


int main() {
    /*
        We can use scanf() function to get input from the standard input
        scanf(const char *format, ...)

        scanf("format specifiers", address of variable to store)
    */

    int a;

    printf("Enter A NUMBER: ");
    // Scan input from stdin
    scanf("%d", &a); // Storing an int, so we use %d format specifier. | Storing it in variable 'a', so we get its address with the & operator (&a)

    // Print input
    printf("%d\n", a);



    /*
        We can get more than one input in a single scanf.
        Simply separate by spaces and specify the variables.
    */

    int b, c ;
    printf("ENTER THREE NUMBERS SEPARATED BY A SPACE EACH: ");
    // Three separate format specifiers and variables for each 
    scanf("%d %d %d", &a, &b, &c);

    // Print the three numbers
    printf("%d %d %d\n", a, b, c);


    /*
        Using scanf() is not safe for strings because they have a fixed length.
        Anything that is not stored in the array will remain in the buffer.
        This could lead to exploits such as buffer overflow which make the program unsafe.

        For this reason there are functions that restrict the size of input, making the code safer:

        char a = getchar(); get SINGLE CHAR from stdin
        or
        char a = getc(stdin);

        *fgets(char *str, int n, FILE *stream); // reads a line from the stdin

        fgets ( ptr where to store, size of input, where we are reading from {stdin or file} )
    */

    fflush(stdin); // FLUSH BUFFER - a \n is LEFT IN THE BUFFER so flushing stdin is neccesary to read chars or strings

    printf("Input char: ");
    char ch = getc(stdin);
    printf("%c\n", ch);


    fflush(stdin); // getc or getchar leave a \n in the buffer, it needs to be flushed or removed for fgets to work
    char str[15]; // char array of size 15;

    // Since str is an array , variable itself is a pointer - sizeof(str) will let us get all the chars possible - stdin, we are reading from the standard input
    printf("Input string: ");

    // fgets includes reads up to and including \n, so the buffer does not need to be flushed
    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}