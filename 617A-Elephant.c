#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int start = 0;
    int count = 0;

    // Solution 1
    if (x % 5 != 0) {
        count = x/5 + 1;
    } else {
        count = (x/5);
    }

    //Solution 2
    // for (int i = 5; i > 0; i--) {
    //     int step = x/i;
    //     count += step;
    //     x -= i*step;
    // }

    //Solution 3
    // for (int i = 5; i > 0; i--) {
    //     while (start < x) {
    //         if (start + i > x) {
    //             break;
    //         } else {
    //             start += i;
    //             count++;
    //         }
    //     }
    // }
    printf("%d", count);
    return 0;
}