#include <stdio.h>

int main()
{
    int k;
    int n;
    int w;
    scanf("%d %d %d", &k, &n, &w);
    int cost = 0;
    int borrow = 0;
    for (int i = 1; i <= w; i++) {
        cost += i*k;
    }
    if (cost > n) {
        borrow = cost - n;
    } 
    printf("%d", borrow);
    return 0;
}