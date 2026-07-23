#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "1", temp[100];
    int i, j, count;

    printf("%s\n", s);

    for(i = 1; i < 5; i++) {
        temp[0] = '\0';

        for(j = 0; j < strlen(s);) {
            count = 1;

            while(s[j] == s[j + 1]) {
                count++;
                j++;
            }

            char part[10];
            sprintf(part, "%d%c", count, s[j]);
            strcat(temp, part);
            j++;
        }

        strcpy(s, temp);
        printf("%s\n", s);
    }

    return 0;
}
