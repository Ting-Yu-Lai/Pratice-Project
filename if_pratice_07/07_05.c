//Please enter three of integers,choose median among of three integers.
#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    int med;
    printf("Please enter three of integers :");
    scanf("%d%d%d", &a, &b, &c);

    med = a;
    if (med >= b && b >= c || med <= b && c >= b)
    {
        med = b;
    }
    if (c <= med && c >= b || b <= c && med >= c)
    {
        med = c;
    }
    
    printf("The mininum is: %d.\n", med);
    return 0;
}