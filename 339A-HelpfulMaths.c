#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    int a;
    for (int i = 0; i < len; i += 2) {
        for (int j = i + 2; j < len; j += 2) {
            if (s[i] > s[j]) {
                a = s[i];
                s[i] = s[j];
                s[j] = a;
            }
        }
    }
    printf("%s", s);
    return 0;
}