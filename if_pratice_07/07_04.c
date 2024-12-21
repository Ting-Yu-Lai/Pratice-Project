//Please enter two of integers,choose smally among of two integers.
#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    int min;
    printf("Please enter three of integers :");
    scanf("%d%d", &a, &b);

    min = a;
    if (b <= min)
    {
        min = b;
    }
    printf("The mininum is: %d.\n",min);
    return 0;
}