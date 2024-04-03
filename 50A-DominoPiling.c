#include <stdio.h>

int main()
{
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int area = m*n;
    int count = 0;
    while (area >= 2) {
        area = area - 2;
        count++;
    }
    printf("%d", count);
    return 0;
}