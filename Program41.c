#include <stdio.h>

int main() {
    int n, i, sq, temp, digits = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sq = i * i;
        temp = i;
        digits = 1;

        while(temp >= 10) {
            digits *= 10;
            temp /= 10;
        }

        digits *= 10;

        if(sq % digits == i)
            printf("%d ", i);
    }

    return 0;
}
