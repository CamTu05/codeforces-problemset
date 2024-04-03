#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[100];
    scanf("%s", a);
    scanf("%s", b);
    int ans = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] < 'a') {
            a[i] += 32;
        }
        if (b[i] < 'a') {
            b[i] += 32;
        }
        if (a[i] < b[i]) {
            ans = -1;
            break;
        } else if (a[i] > b[i]) {
            ans = 1;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}