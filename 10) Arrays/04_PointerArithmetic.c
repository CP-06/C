#include <stdio.h>
int main()
{
    // POINTER ARITHMETIC USING INTEGER POINTER
    int c = 5;
    int *ptr = &c;
    printf("The address of a is %p\n", &c);
    printf("The address of a is %p\n", ptr);
    ptr++;
    printf("The value of ptr is %p\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char a = 'A';
    char *pt = &a;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", pt);
    ptr++;
    printf("The value of ptr is %p\n", pt);
    return 0;
}