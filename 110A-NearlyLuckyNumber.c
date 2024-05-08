#include <stdio.h>

int main()
{
    unsigned long long n;
    scanf("%lld", &n);
    int count = 0;
    while (n > 0) {
        int digit = n%10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    if (count == 4 || count ==7) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}