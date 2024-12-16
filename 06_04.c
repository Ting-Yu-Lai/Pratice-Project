//某吃到飽餐廳套餐每人300元。因周年慶特價方案，每桌滿3000就打八折，試寫一程式讓服務生輸入一桌的消費人數，輸出該顧客應附帳的總金額。
#include <stdio.h>

int main()
{
    int customers, total = 0;

    printf("Please enter the number of customers :");
    scanf("%d", &customers);

    if (customers >= 10) {
        total = customers * 300 * 0.8;
        printf("Total = %d", total);
    } else {
        total = customers * 300;
        printf("Total = %d", total);
    }
}
