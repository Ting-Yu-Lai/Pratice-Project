//Use another skill to achievment same purpose
//Enter four integers then choose maxinum integer among the four integers
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    int max;
    printf("Please enter four of numbers :");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max = a;
    if (b >= max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    printf("The maxinum is :%d. \n", max);
    return 0;
}
//Suppose a is maxinum integer then compare b with a, if b is maxinum integer then compare c with b, if c is maxinum integer then compare d with c.