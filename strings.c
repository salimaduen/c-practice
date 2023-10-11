#include <stdio.h>
#include <string.h>

int main() {
    /*
        Strings in C are arrays of characters

        You can give it a fix length:
        char str[10];

        or you can directly create the string and the size will be calclated:
        char str[] = "Hello World!";

        The last character for a string MUST be a NULL terminator '\0'
        
    */

    char str[] = "Hello World!";
    if (str[sizeof(str) - 1] == '\0') {
        // All strings MUST end with this character
        printf("LAST CHARACTER IS NULL TERMINATOR\n");
    }

    char str2[12] = "Hello World"; // If you create a char array of a length, you must leave an extra space for the null terminator;

    // As with other arrays the variable name is just a pointer to the first character in the array
    printf("%p\n", str2);

    // You can iterate through the array until the NULL terminator is found
    int i = 0;
    do {

        // print character at starting address  + i
        printf("%c ", *(str2 + i));
        i++;

    // While current character is not NULL terminator
    } while(*(str2 + i) != '\0');

    printf("\n");

    // Safest way to get strings from the stdin is using fgets() function
    char input[50];

    printf("Enter a string: ");
    // Store at input - Max. Input size of array - From stdin
    // fgets will get all strings until newline, including the newline.
    fgets(input, sizeof(input), stdin);

    printf("%s", input);

    // puts() will put string to stdout
    puts(input);

    return 0;
}