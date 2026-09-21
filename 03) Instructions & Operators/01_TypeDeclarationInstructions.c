#include <stdio.h>
int main()
{
    int i = 10; // Declare and initialize 'i' with 10
    int j = i; // Declare 'j' and initialize with 'i'
    printf("i = %d\n", i);
    printf("j = %d\n", j);

    int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    int k = a + j - i; // Valid: use previously defined variables
    printf("k = %d\n", k);

    int w, x, y, z;
    w = x = y = z = 30; //  w, x, y, z all equal to 30
    printf("w = %d\n", w);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    int p = 50;
    float q = 25.1;
    char r = '^';
    printf("p = %d\n", p);
    printf("q = %f\n", q);
    printf("r = %c\n", r);
    // Here, %d, %f, %c are called the format specifier for int, float, char respectively 
    return 0;
}