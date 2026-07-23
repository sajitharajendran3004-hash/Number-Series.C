#include <stdio.h>

int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, i, cat;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        cat = fact(2 * i) / (fact(i + 1) * fact(i));
        printf("%d ", cat);
    }

    return 0;
}
