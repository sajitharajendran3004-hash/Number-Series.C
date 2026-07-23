#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i, sum;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = a + b;

    printf("%d %d ", a, b);

    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        sum = sum + c;
        a = b;
        b = c;
    }

    printf("\nSum = %d", sum);

    return 0;
}
