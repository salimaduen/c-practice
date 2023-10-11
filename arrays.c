#include <stdio.h>

int find_num(int*, int, int);

int main() {
    /*
        To declare an array you specify the datatype, variable name and [size]:

        int a[10];
        double b[2];

        Arrays can also be initialized without specifying size with some initial values:

        int a[] = {1, 2, 3, 4, 5};
        size = 5

        Arrays in C are not objects, therefore the variable stores the pointer for the first index
        But that also means that its size is restricted to the scope it was made in
        Meaning you can't pass an array to another function without also passing its size

    */

    int a[] = {1, 2, 3, 4, 5};

    // If we print a, it will print the address of the first index
    printf("%p\n", a);

    /*
        The array size will be x number of spaces in the memory
        These spaces will be based on the datatype
        So if it is an int array, every chunk will be of 4 bytes
        For this reason if we get sizeof(a) it will return 20 bytes, since that is the total amount of bytes allocated
        If we want to get the size we divide the total bytes sizeof(a) by the size of each chunk 4 bytes

        (The size of the datatype may vary for each system so it is better to use a general form instead of specific bytes)

        sizeof(a)                   -> 20 bytes
        sizeof(int) or sizeof(a[0]) -> 4 bytes  (the latter will give whatever datatype is stored in the first index)

        20 bytes / 4 bytes = size 5
    */

    int size = sizeof(a) / sizeof(int);
    // They are equal in this scenario, because we know the datatype
    size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        // for every iteration it will increase the address by one value
        // Since they're divided in chunks of 4 or however many bytes, the increment will be in that many bytes.
        // Instead of iterating by index you iterate using the pointers
        printf("%d ", *(a + i));
    }
    printf("\n");

    if (find_num(a, 6, size)) {
        printf("Found!\n");
    } else {
        printf("Not found!\n");
    }

    return 0;
}


/*
    pointer to array (first index)
    size is limited to the scope of the array, so it needs to be passed as well
*/
int find_num(int* arr, int num, int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == num) {
            result = 1;
            break;
        }
    }

    return result;
}