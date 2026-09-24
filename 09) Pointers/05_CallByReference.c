#include <stdio.h>
int sum(int *, int *);
// Sum should change the value of x
int sum(int* a, int* b)
{
    *a = 6;
    return (*a + *b);
}
int main()
{
    int x = 1, y = 6;
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}

// Here, because the use of pointers only the address of the variable x is passed, but because the value of x is getting
// updated so the correct output is produced