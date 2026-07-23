#include <stdio.h>

int main() {
    int n, a = 0, b = 0, c = 1, d, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d %d ", a, b, c);

    for(i = 4; i <= n; i++) {
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }

    return 0;
}
