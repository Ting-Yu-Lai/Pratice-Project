#include <stdio.h>

int main() {
    int total = 0;
    char id;
    printf("Please enter the ID of the item(check with 0): \n");
    scanf("%c", &id);
    while (id != '0'){            
        switch (id) {
            case '1':
                total += 90;
                break;
            case '2':
                total += 75;
                break;
            case '3':
                total += 83;
                break;
            case '4':
                total += 89;
                break;
            case '5':
                total += 71;
                break;        
        }
        scanf("%c", &id);
    }
    printf("The total is %d\n", total);
    return 0;
}