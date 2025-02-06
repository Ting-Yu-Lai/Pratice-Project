#include <stdio.h>

int main() {
    //運用不同方法印出偶數且不是3的倍數
    int count = 0, count1 = 0;
    for (int count = 0; count <= 10; count++){
        if (count % 2 == 0 && count % 3 != 0){
            printf("%d\n", count);
        }
    }

    for (int count1 = 2; count1 <= 10; count1 += 2){
        if (count1 % 3 != 0){
            printf("%d\n", count1);
        }
    }

    return 0;
}