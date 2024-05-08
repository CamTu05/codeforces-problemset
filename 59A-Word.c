#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a') {
            lower++;
        } else {
            upper++;
        }
    }
    if (upper > lower) {
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= 'a') {
                s[i] -= 32;
            }
        }
    } else {
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] <= 'Z') {
                s[i] += 32;
            }
        }
    }
    printf("%s", s);
    return 0;
}