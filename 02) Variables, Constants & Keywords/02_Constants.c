# include <stdio.h>
int main()
{
    int a = 7;
    float b = 3.14;
    char c = '$';
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    // Here, 7, 3.14, $ are the constants because their value cannot be changed and a, b, c are the variables as their values can be changed.
    return 0;
}