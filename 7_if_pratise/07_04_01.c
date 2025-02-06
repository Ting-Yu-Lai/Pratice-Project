//Please enter three of integers,choose smally among of three integers.//Please enter two of integers,choose smally among of two integers.
#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    int min;
    printf("Please enter three of integers :");
    scanf("%d%d%d", &a, &b, &c);

    min = a;
    if (b <= min)
    {
        min = b;
    }
    if (c <= min)
    {
        min = c;
    }
    
    printf("The mininum is: %d.\n", min);
    return 0;
}