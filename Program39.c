#include <stdio.h>

int main() {
    int n, i, temp, rem, rev;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        temp = i;
        rev = 0;

        while(temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        printf("%d ", rev);
    }

    return 0;
}
