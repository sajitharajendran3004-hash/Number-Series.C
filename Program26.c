#include <stdio.h>

int main() {
    int n, a = 2, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        a = a * 2;
    }

    return 0;
}
