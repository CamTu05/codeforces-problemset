#include <stdio.h>
int main() 
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int score[51];
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (score[i] >= score[k-1] && score[i] > 0) {
            count++;
        } else {
            break;
        }
    }
    printf("%d", count);
    return 0;
}