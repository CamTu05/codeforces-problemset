#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int year = 0;
    while (a <= b) {
        a = a*3;
        b = b*2;
        year++;
    }
    printf("%d", year);
    return 0;
}