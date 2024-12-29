//三角形簡化訓練，一開始提到簡化我先想到 讓他按照順序排，在07_10的練習可以用在這裡
//但我後來想到那是陣列才可以我就沒有仔細去想，看過老師的講解其實這方法是可行的，所以重新思考一下這個可能性。
//沒關係這練習主要是在簡化我們的判斷句

//if side1<=side2<=side3
#include <stdio.h>

int main()
{
    int side1 = 0, side2 = 0, side3 = 0;
    int reg = 0;
    printf("Please enter three of lengths :");
    scanf("%d%d%d", &side1, &side2, &side3);


    if(side1 >= side2){
        reg = side1;
        side1 = side2;
        side2 = reg;
    }  
    if(side2 >= side3){
        reg = side2;
        side2 = side3;
        side3 = reg;
    }
    if(side1 >= side3){
        reg = side1;        
        side1 = side3;        
        side3 = reg;
    }


    if(side1 == side3) 
    {
        printf("Regular triangle\n");
    }
    if(side1 == side2 || side2 == side3) 
    {   
        printf("Isosceles triangle\n");
    }
    if (side1 * side1 + side2 * side2 == side3 * side3) 
    {
        printf("Right triangle\n");
    }
    return 0;
}