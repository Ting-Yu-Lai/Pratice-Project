//Have three of integers A B C at three place a b c,need change three of integers to different place,C to a, A to b, B to c.
///先讀再寫就不會被改，先寫再讀就會改掉
#include <stdio.h>

int main()
{
    int A = 2, B = 7, C = 9;
    int reg = 0;

    printf("Before: %d %d %d", A, B, C);
    reg = A;
    A = C;
    C = B;
    B = reg;
    printf("\nAfter: %d %d %d", A, B, C);
    return 0;

}