#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    while(num != 0) {
        count++;
        num = num / 10;
    }

    printf("Digits = %d", count);

    return 0;
}
