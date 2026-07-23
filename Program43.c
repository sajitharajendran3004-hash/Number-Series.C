#include <stdio.h>

int main() {
    int n, temp, rem, sum;

    printf("Enter Number: ");
    scanf("%d", &n);

    while(n != 1 && n != 4) {
        sum = 0;
        temp = n;

        while(temp != 0) {
            rem = temp % 10;
            sum += rem * rem;
            temp /= 10;
        }

        n = sum;
    }

    if(n == 1)
        printf("Happy Number");
    else
        printf("Not Happy Number");

    return 0;
}
