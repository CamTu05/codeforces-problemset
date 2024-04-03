#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        char input[4];
        scanf("%s", input);
        if (input[1] == '+') {
            ans++;
        } else {
            ans--;
        }
    }
    printf("%d", ans);
}