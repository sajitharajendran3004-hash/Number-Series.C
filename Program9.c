#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
