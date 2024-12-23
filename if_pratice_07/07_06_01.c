//put the numbers in descending order
#include <stdio.h>

int main()
{
    int old_int1 = 0, old_int2 = 0, old_int3 = 0;
    int reg1 = 0, reg2 = 0;


    printf("Please enter three of integers :");
    scanf("%d%d%d", &old_int1, &old_int2, &old_int3);

    if(old_int1 > old_int2)
    {
        reg1 = old_int1;
        reg2 = old_int2;
        old_int1 = reg2;
        old_int2 = reg1;
        
    }
    if(old_int1 > old_int3)
    {
        reg1 = old_int1;
        reg2 = old_int3;
        old_int1 = reg2;
        old_int3 = reg1;
    }
    if(old_int2 > old_int3)
        {
        reg1 = old_int2;
        reg2 = old_int3;
        old_int2 = reg2;
        old_int3 = reg1;
        }
    
    printf("The least og greatest is : %d %d %d", old_int1, old_int2, old_int3);
    return 0;
}