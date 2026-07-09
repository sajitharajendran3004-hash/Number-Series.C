#include <stdio.h>

int main() {
    int n, i, num = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", num);
        num = num * 2;
    }

    return 0;
}
