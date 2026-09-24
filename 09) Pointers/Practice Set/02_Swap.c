#include <stdio.h>
void swap(int* a, int* b);
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 6;
    printf("Before swapping :\n");
    printf("The value of a is %d and the value of b is %d\n", a, b);
    swap(&a, &b);
    printf("After swapping :\n");
    printf("The value of a is %d and the value of b is %d\n", a, b);
    return 0;
}