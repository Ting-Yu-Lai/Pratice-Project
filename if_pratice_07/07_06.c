//put the numbers in ascending order
#include <stdio.h>

int main()
{
    //two state one of already greatest to leats one of leats to greatest
    int old_int1 = 0, old_int2 = 0;
    int new_int1 = 0, new_int2 = 0;
    int reg_int = 0;
    printf("Please enter two integers :");
    scanf("%d%d", &old_int1, &old_int2);
    if(old_int1 < old_int2)
    {
        printf("least of greatest : %d %d", old_int1, old_int2);
    }
    else if(old_int1 > old_int2)
    {
        reg_int = old_int1;
        new_int1 = old_int2;
        new_int2 = reg_int;
        printf("least of greatest : %d %d", new_int1, new_int2);
    }
    else
    {
        printf("the are eqaul");
    }
}