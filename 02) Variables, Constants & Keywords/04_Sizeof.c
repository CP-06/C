#include <stdio.h>
int main() 
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    // sizeof returns the size of the datatype
    return 0;
}