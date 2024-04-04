#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int count = 0;
    char letter = 'a';
    while (letter < 'z' + 1) {
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == letter) {
                count++;
                break;
            }
        }
        letter++;
    }
    if (count % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
    return 0;
}