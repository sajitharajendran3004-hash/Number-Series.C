#include <stdio.h>

int main() {
    int num, temp, rem, fact, sum = 0, i;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        rem = num % 10;
        fact = 1;

        for (i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;
        num = num / 10;
    }

    if (temp == sum)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}
